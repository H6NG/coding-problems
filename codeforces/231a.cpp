/* 

Notes: 

- if two of them are sure then ++; 
- That's O(n^2)
*/

#include <iostream> 
using namespace std;

int main(){

    int num_lines; 
    cin >> num_lines; 
    int o = 0; 

    for(auto i = 0; i < num_lines; i++){
        int val = 0; 
        for(auto j = 0; j < 3; j++){
            int m = 0; 
            cin >> m;
            val += m;
        }
        if(val > 1) o++; 
    }
    cout << o;

    return 0; 
}