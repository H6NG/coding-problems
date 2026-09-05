#include <iostream>
#include <vector>
using namespace std; 
using ll = long long; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, p; cin >> t; 
    while(t--){
        int n; cin >> n; 
        vector<int> v(n); 
        bool first_one = false; 
        bool last_one = false; 
        for(int i = 0; i < n; i++){
            cin >> p; v[i] = p;
        }
        for(int j = 0; j < v.size() && !first_one; j++){
            if((v[j] == -1 || v[j] == 1)){
                v[j] = 1; 
                first_one = true; 
                break; 
            }
        }
        for(int k = v.size()-1; k >= 0 && !last_one; k--){
            if((v[k] == -1 || v[k] == 1)){
                v[k] = 1; 
                last_one = true; 
                break; 
            }
        }
        for(int e = 0; e < v.size(); e++){
            if(v[e] == -1) cout << 0 << ' ';  
            else cout << v[e] << ' '; 
        }
    }
    return 0; 
}