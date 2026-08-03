
/*

Notes: 

- every char in the alphabet should be in the word.

*/


#include <iostream>
#include <string>
#include <vector>
using namespace std; 

int main(){

    int n; cin >> n; 
    string s; cin >> s; 
    for(char &c : s){
        c = tolower(c); 
    }
    vector<int> v(26,0); // array of 26 and all init at 0; 
    for(int i = 0; i < n; i++){
        v[s[i] - 97]++; 
    }
    for(int j = 0; j < v.size(); j++){
        if(v[j] == 0){
            cout << "NO"; 
            return 0; 
        }
    }
    cout << "YES"; 
    return 0; 
}
