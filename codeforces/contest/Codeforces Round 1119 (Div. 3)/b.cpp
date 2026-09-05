#include <iostream>
#include <algorithm>
using namespace std; 
using ll = long long; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while(t--){
        int c; cin >> c; 
        int o = 0, mod40 = 0, mod20 = 0;
        while(c--){
            ll p; cin >> p; 
            if(p%2==1) o++; 
            else if(p%4==0) mod40++; 
            else mod20++; 
        }
        cout << max({o, mod40, mod20}) << '\n'; 
    }
    return 0; 
}