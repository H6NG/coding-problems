#include <vector>
#include <iostream>
using namespace std;
using ll = long long; 
const ll MOD = 1e9+7; 

pair<ll, ll> fib(ll n){
    if(n==0) return {0,1}; 
    auto[a,b] = fib(n/2); 
    ll c = (a * ((2 * b % MOD-a+MOD) % MOD)) % MOD; 
    ll d = ((a*a%MOD+b*b%MOD)%MOD); 
    if(n%2==0) return {c,d}; 
    else return {d,(c+d)%MOD}; 
}

int main() {
	// your code goes here
	int n, q; 
	cin >> n >> q; 
	vector<int> I(n+1); 
	vector<ll> p(n+1);
	//1-indexed array 
	for(int i = 1; i <= n; i++){
	    cin >> I[i]; 
	    ll f = fib(I[i]).first; 
	    p[i] = (p[i-1]+f) % MOD; 
	}
	while(q--){
	    int L, R; cin >> L >> R; 
	    ll ans = (p[R]-p[L-1]+MOD)%MOD; 
	    cout << ans << '\n'; 
	}
    return 0; 
}
