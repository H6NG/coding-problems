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

const ll MOD = 998244353; 
ll power(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        vector<ll> v(n); 
        for(ll &x : v) cin >> x; 
        sort(v.begin(),v.end(), greater<>()); 
        ll f = 1; 
        for(int i = 1; i <=n-1; i++){
            f = f*i%MOD; 
        }
        ll ans = 0, prefix = 0; 
        for(int i = 1; i < n; i++){
            ll sum = 0; 
            prefix = (prefix + v[i-1]) % MOD; 
            sum = (prefix-(ll)i *v[i])%MOD; 
            sum = (sum+MOD)%MOD; 
            ll ways = f * power(i, MOD-2) %MOD; 
            ans = (ans + sum * ways) %MOD; 
        }
        cout << ans << endl; 
    }
    return 0; 
}