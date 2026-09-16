#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

int main() {
	// your code goes here
	int n, k; 
	cin >>n >>k; 
	vector<ll> a(n); 
	for(auto& x : a) cin >> x; 
	ll ans= 0; 
	for(int i = 0; i < n; i++){
	    if(i <= k) ans+= min(a[i], a[k]); 
	    else ans+= min(a[i], a[k]-1); 
	}
	cout << ans; 
    return 0; 
}
