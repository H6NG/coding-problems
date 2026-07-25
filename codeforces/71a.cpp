/* 

Notes: 

len > 10

long word -> replaced by abbreviation 

abbr made of first and last letter of a word and between them = num_letters between first and last

Ex: localization -> l 10 n 
Ex1: internationalization -> i 18 n 

return word if less or equal to 10; 

first line = int n = num of word

and the following lines contains the word to translate
*/

#include <iostream>
#include <string> 
using namespace std; 

//helper func

string reduce(string input){

    if(input.length() <= 10) return input; 
    int len = input.length() - 2; 
    
    return string(1, input.front()) + to_string(len) + string(1, input.back()); 
}

int main(){

    int nw = 0; 
    string nwl; 

    cin >> nw; 
    cout << '\n'; 

    for(auto i=0; i<nw; i++){
        cin >> nwl; 
        cout << reduce(nwl) << '\n'; 
    }
    return 0; 
}