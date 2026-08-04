#include <iostream>
#include <string> 
#include <map>
#include <set>
#include <algorithm>
using namespace std; 

// cannot delete s1 or sn
// you can delete one char from the string. whichever
// then compute the set.
/* that's O(n^2)
string fs(string s){
    int i = 0; 
    while (i < (int)s.length() - 1){
        if(s[i] == s[i+1]){
            s.erase(i,1); 
        } else i++; 
    }
    return s; 
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n; 
    for(int t = 0; t < n; t++){

        int len; cin >> len; 
        string s; cin >> s; 
        int min_val = 10000000; // simulate the max
        for(auto i = 1; i < len-1; i++){
            string temps = s; 
            temps.erase(i, 1); 
            int currlen = fs(temps).length();
            if(min_val > currlen) {
                min_val = currlen; 
            } 
        }
        cout << min_val << '\n'; 
    }
    return 0; 
}

*/ 


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; 
    for(int t = 0; t < n; t++){
        int len; cin >> len; 
        string s; cin >> s; 

        int base_len = 1;
        for (int i = 1; i < len; i++) {
            if (s[i] != s[i-1]) {
                base_len++;
            }
        }
        int m = 0; 
        for (int i = 1; i < len - 1; i++) {
            if (s[i-1] == s[i+1]) {
                if (s[i] != s[i-1]) {
                    m = max(m, 2);
                }
            }
            else if (s[i] != s[i-1] && s[i] != s[i+1]) {
                m = max(m, 1);
            }
        }
        cout << base_len - m << '\n'; 
    }
    return 0; 
}