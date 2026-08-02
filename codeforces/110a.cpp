
/*


Notes: 

- Easy question: but we need a long long for var n.

- The range for int numbers is between -2M and 2M and in the constraints, it says
1 <= n <= 10^18 >>> 2M 

*/

#include <iostream>
#include <string>
using namespace std; 


int main(){

    long long n; 
    int num = 0; 
    cin >> n; 
    string s; 
    s = to_string(n); 
    for(char c : s){
        if(c == '4' || c == '7'){
            num++; 
        }
    }
    string s_num = to_string(num); 
    num = 0; 
    for(char c : s_num){
        if(c == '4' || c == '7'){
            num++; 
        }
    }
    if(num == s_num.length()) cout << "YES";
    else cout << "NO"; 

    return 0; 
}