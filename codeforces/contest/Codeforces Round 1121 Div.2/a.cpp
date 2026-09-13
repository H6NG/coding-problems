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
        int c, a; cin >> c; 
        vector<int> v; 
        vector<int> arr; 
        for(int i = 0; i < c; i++){
            cin >> a; 
            if(a != i+1) v.push_back(i); 
            arr.push_back(a); 
        }
        vector<int> temp; 
        for(int i : v) temp.pb(arr[i]); 
        reverse(temp.begin(), temp.end());
        int ans =0; 
        for(int i = 0; i < v.size(); i++){
            arr[v[i]] = temp[i];
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == i+1) ans++; 
        }
        if(ans == arr.size()) cout << "YES\n"; 
        else cout << "NO\n"; 
    }
    return 0; 
}