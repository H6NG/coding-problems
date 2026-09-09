#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main() {
	// your code goes here
	int T; cin >> T; 
	while(T--){
	    int X, Y; 
	    cin >> X >> Y; 
	    ll ans = LLONG_MAX; 
	    for(ll K = 1; K <= 100; K++){
	        ll ss = K*(K+1)*(2*K+1)/6; 
	        ll profit = Y*ss-X*K; 
	        if(profit>0) ans=min(ans, K); 
	        else{
	            ll dp=Y*K*K; 
	            ll extraDay=(-profit)/dp+1; 
	            ans=min(ans, K+extraDay); 
	        }
	    }
	    cout << ans << '\n'; 
	}
    return 0; 
}
