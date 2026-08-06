#include <iostream>
using namespace std; 

int main(){

    int n, i = 0; cin>> n; 
    while(i < n){
        int k; cin >> k; 
        string s; s = to_string(k); 
        int a = (s[0] - '0') + (s[1] - '0'); 
        cout << a << '\n';  
        i++; 
    }

    return 0; 
}