#ifndef HEADER_H
#define HEADER_H
 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <queue>
#include <cmath>
#include <cstdlib>
 
using namespace std;
 
//or just use #include <bits/stdc++.h>
 
/*in main use: 
 
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
 
*/
 
#endif
 
using namespace std; 
using ll = long long; 
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
 
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        string s; cin >> s;
        
        if(s[0] == '1'){
            int ans = 0; 
            for(int i = 1; i < n; i++){
                if(s[i] == '0') ans++; 
            }
            cout << ans << endl; 
            continue;
        }
        int cnt_zero = 0; 
        for(char c : s){
            if(c == '0') cnt_zero++; 
        }
        int ol = 0; 
        int zr = cnt_zero; 
        int ans = n; 
        for(int i = 0; i <= n; i++){
            ans = min(ans, ol+zr); 
            if(i==n) break; 
            if(s[i] == '1') ol++; 
            else zr--; 
        }
        cout << ans << endl; 
    }
    return 0; 
}