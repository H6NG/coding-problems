#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

const ll MOD = 998244353; 

int main() {
	// your code goes here
	int t; cin >> t; 
	while(t--){
	    int n; cin >> n; 
	    vector<int> v(n+1); 
	    for(int i = 0; i < n; i++){
	        int x; cin >> x; v[x]=i; 
	    }
	    vector<ll> dp(1,1); 
	    for(int l = 2; l<=n; l++){
	        vector<ll> ndp(l); 
	        ll sum = 0; 
	        if(v[l-1]<v[l]){
	            for(int j = 1; j<=l; j++){
	                ndp[j-1] = sum; 
	                if(j-1<dp.size()) sum = (sum+dp[j-1])%MOD; 
	            }
	        }
	        else{
	            for(int j = l; j >= 1; j--){
	                if(j-1<dp.size()) sum = (sum+dp[j-1])%MOD;
	                ndp[j-1]=sum; 
	            }
	        }
	        dp = ndp; 
	    }
	    ll ans = 0; 
	    for(ll x : dp) ans = (ans+x)%MOD; 
	    cout << ans << '\n'; 
	}
    return 0; 
}
