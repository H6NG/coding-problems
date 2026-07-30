#include <iostream>
using namespace std; 


int main (){

    int n, m, o, ans = 0, ansr; 
    cin >> n; cin >> m; cin >> o; 

    for(int i = 1; i <= o; i++){
        ans+= i * n; 
    }
    ansr = ans - m; 
    if(ansr > 0) cout << ansr; 
    else cout << '0'; 

    return 0; 
}