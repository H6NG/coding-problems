/* 

NoteS: 

- 7 1's or 7 0's consecutively is considered dangerous 
- using to_string() and tstoi() 

*/

#include <iostream>
#include <string>
using namespace std; 

int main(){

    string num; 
    cin >> num; 

    // obvious base case.
    if(num.length() < 7){
        cout << "NO"; 
        return 0; 
    }

    int count = 1; 
    char prev = num[0];

    for(int j = 1; j < num.length(); j++){

        if(num[j] == prev){
            count++; 
        }
        else{
            // if num[j] != prev
            count = 1; 
            // it resets 
        }

        if(count >= 7){
            cout << "YES"; 
            return 0; 
        }
        
        // update prev 
        prev = num[j]; 
    }
    //otherwise
    cout << "NO"; 
    return 0; 
}