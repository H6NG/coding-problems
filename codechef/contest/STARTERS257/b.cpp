#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

int main() {
	// your code goes here
	int t; cin >> t; 
	while(t--){
	    int n, k, a; 
	    cin >> n >> k; 
	    vector<ll> v; 
	    for(int i = 0; i < n; i++){
	        cin>>a; 
	        v.push_back(a); 
	    }
	    
	    // we need exactly 2 flood lights
        ll ans = LLONG_MAX; 
	    for(int i = 0; i < n; i++){
	        for(int j = i+1; j<n; j++){
	            if(i-k<=0&&j+k>=n-1&&j-i<=2*k+1) ans=min(ans, 1LL*v[i]+v[j]); 
	        }
	    }
	    if(ans == LLONG_MAX) cout << -1 << '\n'; 
	    else cout << ans << '\n'; 
	}
    return 0; 
}
