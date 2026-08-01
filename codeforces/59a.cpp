#include <iostream> 
#include <string>
#include <cctype>
using namespace std; 


int main(){
    string str; 
    cin >> str; 

    int num_low = 0, num_high = 0; 

    for(char &c : str){
        if(isupper(c)){
            num_high++; 
        }
        else num_low++; 
    }
    if(num_high>num_low){
        for(char &c : str){
            c = toupper(static_cast<unsigned char>(c)); 
        }
    }
    else {
        for(char &c : str){
            c = tolower(static_cast<unsigned char>(c)); 
        }
    }
    cout << str; 
    return 0; 
}