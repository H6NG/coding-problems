
/* 

Notes: 
- swapping brackets 

*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        string a,b; cin >> a >> b; int A = 0, B = 0;
        bool possible = true;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == '(' && b[i] == '(') {
                A++;
                B++;
            }
            else if (a[i] == ')' && b[i] == ')') {
                A--;
                B--;
            }
            else {
                // Give '(' to the string with smaller balance.
                if (A <= B) {
                    A++;
                    B--;
                } else {
                    A--;
                    B++;
                }
            }
            if (A < 0 || B < 0) {
                possible = false;
                break;
            }
        }
        if (A != 0 || B != 0) possible = false;
        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0; 
}