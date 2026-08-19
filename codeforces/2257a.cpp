#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std; 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while(t--){
        int m, n; cin >> n >> m; 
        unordered_set<char> c; 
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            c.insert(s[0]); 
        }
        bool no = false; 
        for(int j = 0; j < m; j++){
            string s; cin >> s; 
            for(int k = 0; k < s.size(); k++){
                if(c.find(tolower((unsigned char) s[k])) == c.end()){
                    no = true; 
                }
            }
        }
        if(no == true) cout << "NO\n";
        else cout << "YES\n"; 
    }
    return 0; 
}