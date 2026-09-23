#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

int main() {
	// your code goes here
	int t; cin >>t; 
	while(t--){
	    int n; cin >> n; 
	    vector<int> v(n+1); 
	    for(int i = 1; i <= n; i++){
	        int a; cin >> a; 
	        v[i]=a; 
	    }
	    vector<ll> p(n+1); 
	    p[0] = 0; 
	    for(int i=1;i<=n; i++){
	        p[i] = p[i-1]+v[i]; 
	    }
	    const ll INF = LLONG_MAX; 
	    vector<ll> l(n+1); 
	    l[0] = INF; 
	    for(int i = 1; i<=n;i++) l[i]=min(l[i-1],p[i]); 
	    vector<ll> r(n+2); 
	    r[n+1]=INF; 
	    for(int i = n; i >=1; i--){
	        r[i]=min(r[i+1],p[i]); 
	    }
	    bool ans = l[n]>=0; 
	    if(!ans){
	        for(int i =1; i<=n&&!ans;i++){
	            bool left=(l[i-1]>=0); 
	            ll rm = r[i+1]; 
	            if(left&&rm>=v[i]) ans = true; 
	        }
	    }
	    ans == true ? cout << "YES\n" : cout << "NO\n"; 
	}
    return 0; 
}
