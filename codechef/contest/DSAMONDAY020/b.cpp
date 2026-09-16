#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

int main() {
	// your code goes here
	int n; cin >> n; 
	vector<ll> v; 
	for(int i = 0; i < n; i++){
	    int a; 
	    cin >> a; 
	    v.push_back(a); 
	}
	ll min = *std::min_element(v.begin(), v.end());
	ll max = *std::max_element(v.begin(), v.end());
	ll c = min + max; 
	
	ll ans = v[0]; 
	for (ll x : v) {
        ll d1 = abs(2 * ans - c);
        ll d2 = abs(2 * x - c);
        if (d2 < d1 || (d2 == d1 && x < ans)) ans = x;
    }
    cout << ans; 
    return 0; 
}
