/*


Notes: 
- binary 01010101
- Bob wants the smallest num 
and Alice wants the largest 
- Alice chooses first and Bob after. 
- They delete the 0 and 1 s.t. it is optimal 

*/


#include <iostream>
#include <string>
using namespace std; 

string remove(const string& s, size_t i){
    string n = ""; 
    for(int j = 0; j < s.length(); j++){
        if(j != i){
            n += s[j]; 
        }
    }
    return n; 
}

string aliceRemoves(const string& s){ //the largest
    
    bool removed = false;
    string n = ""; 
    // it there's a 0 in front of the string, it means that if we remove the 0, it wont affect the binary 
    if(removed == false && s[0] == '0'){
        n = remove(s, 0); 
        removed = true; 
    }
    if(removed == false){
        for(int i = 0; i < s.length(); i++){ // she needs the leftmost 0 instead of the rightmost 0
            if(s[i] == '0'){
                n = remove(s, i); 
                removed = true; 
                break; 
            }
        }
    }
    if(removed == false){ //it means that there are no 0 in the string s;
        n = remove(s,s.length()-1); 
        removed = true;
    }
    return n; 
}

string bobRemoves(const string &s){ //the smallest

    bool removed = false; 
    string n = ""; 
    if(removed == false){
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                n = remove(s, i); 
                removed = true; 
                break; 
            }
        }
    }
    
    if(removed == false){ //it means that there are no 1 in the string s; 
        n = remove(s, 0); 
    }
    return n; 
}

int main(){

    int num_cases; 
    cin >> num_cases; 
    string s; 
    while(num_cases > 0){
        cin >> s; 
        cout << bobRemoves(aliceRemoves(s)) << '\n';
        num_cases--; 
    }
    return 0; 
}