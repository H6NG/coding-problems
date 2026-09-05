#include <iostream>
using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k; cin >> t; 
    string b; 
    while(t--){
        cin >> n >> k; 
        cin >> b; 
        int ans = 0; 
        for(int i = 0; i < n; i+=k){
            int o = 0;
            for(int j = 0; j < k; j++){
                if(b[j+i]=='0') break; 
                else o++; 
            }
            if(o==k) ans++; 
        }
        cout << ans << '\n';
    }
    return 0; 
}