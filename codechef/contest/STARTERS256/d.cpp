#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

int main() {
	// your code goes here
	int t, n; cin >> t; 
	while(t--){
	    cin >> n; 
	    vector<int> y(n);
	    for(int i = 0; i < n; i++){
	        // cntb or cntr cannot be 0 tho; 
	        cin >> y[i]; 
	    }
	    sort(y.begin(), y.end()); 
	    ll total = 0;
        for(int x : y) total += x;
	    ll maxi = LLONG_MIN; 
	    ll sum = 0; 
	    for(int k = 1; k < n; k++){
	        sum+=y[n-k]; 
	        ll other = total-sum; 
	        ll ans = sum * (n-k) + other * k; 
    	    maxi = max(ans, maxi);
	    }
	    
	    cout << maxi << '\n'; 
	}
    return 0; 
}
