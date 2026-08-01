

/* 

Notes: 
- needs to be divisable by 7,4, 47,74,77,44, etc. 

*/
#include <iostream>
#include <vector>
using namespace std; 

int main(){

    int num; 
    cin >> num; 
    vector<int> lucky_num = {4,7,44,47,74,444,447,474,477,744,774,777};
    bool found = false; 
    for(int i : lucky_num)
        if(num % i == 0) {
            found = true; break; 
        }
    if(found == true) cout << "YES"; 
    else cout << "NO";
    return 0; 
}