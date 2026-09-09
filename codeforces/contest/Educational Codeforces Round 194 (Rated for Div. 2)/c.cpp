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
        ll x, y; 
        cin >> x >> y; 
        ll s = x + y; 
        ll a =0;
        for(int i = 30; i >= 0; i--){
            ll j = a|(1LL<<i); 
            if(j <= x&&(j&(s-j))==0) a = j; 
        }
        cout << (a^(s-a)) << ' ' << x-a << '\n'; 
    }
    return 0; 
}