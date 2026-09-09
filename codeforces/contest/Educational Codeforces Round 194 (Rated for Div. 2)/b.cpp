/* first try :

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while(t--){
        int x,y,k;
        cin >> x >> y >> k; 
        int ans=0; 
        for(int i = 0; i < k; i++){
            ans+=y%x; 
            x++; y++; 
        }
        cout << ans << '\n'; 
    }
    return 0; 
}
    
*/#ifndef HEADER_H
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
        ll x,y,k;
        cin >> x >> y >> k; 
        ll ans=0; 
        if(y<x) ans=k*y+k*(k-1)/2; 
        else{
            ll d = y-x; 
            ll cnt = min(k,max(0LL, d-x+1)); 
            for(ll i = 0; i < cnt; i++){
                ans+=d %(x+i); 
            }
            ans+=(k-cnt)*d; 
        }
        cout << ans << '\n'; 
    }
    return 0; 
}