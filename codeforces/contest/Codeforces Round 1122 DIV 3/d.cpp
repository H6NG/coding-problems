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
        int n; cin >> n; 
        vector<ll> v(n); 
        for(int i = 0; i < n; i++){
            ll a; cin >> a; v[i]=a-(i+1); 
        }
        sort(v.begin(), v.end()); 
        v.erase(unique(v.begin(),v.end()), v.end());
        int be = 1, curr = 1; 
        for(size_t i = 1; i < v.size(); i++){
            if(v[i]==v[i-1]+1) curr++; 
            else curr=1;
            be = max(curr, be); 
        }
        cout << be << endl; 
    }
    return 0; 
}