


/* 


Notes: 
- '+' should not produce an output, so that's the tricky part.

*/

#include <iostream> 
#include <string>
using namespace std; 

int main(){

    string s; cin >> s; 
    for(char &c : s){
        //doing this only to get O(c) time complexity.
        if(c == 'Q' || c=='9' || c == 'H'){
            cout << "YES\n"; 
            return 0; 
        }
    }
    cout << "NO\n";
    return 0; 
}