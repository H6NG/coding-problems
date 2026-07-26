/* 

Notes: 

- Distinct character
- put all char in a set and count the set

*/

#include <set>
#include <string>
#include <iostream>
using namespace std; 


int main(){

    set<char> c; 
    string chars; 

    cin >> chars; 

    for(char i : chars){
        c.insert(i); 
    }
    if(c.size()%2==0) cout << "CHAT WITH HER!" << '\n'; 
    else cout << "IGNORE HIM!" << '\n'; 

    return 0; 
}