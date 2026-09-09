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
        int n, c; 
        cin >> n; 
        int cnt = 0; 
        int first = 0; int last = 0; 
        for(int i = 0; i < n; i++){
            cin >> c; 
            if(c==0){
                cnt++; 
            }
            if(i == 0) first = c; 
            else if(i == n-1) last = c; 
        }
        if(cnt<2) cout << -1 << '\n';
        else if(first == 0&&last == 0) cout << 0 << '\n';
        else if((first == 1 && last == 0)||(first ==0 && last ==1)) cout << 1 << '\n'; 
        else if (first == 1 && last == 1) cout << 2 << '\n';
    }
    return 0; 
}