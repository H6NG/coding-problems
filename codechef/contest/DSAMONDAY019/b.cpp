#include <vector>
#include <iostream>
using namespace std;
using ll = long long; 

int main() {
	// your code goes here
	int n, k; cin >>n>>k; 
	vector<ll> v; 
	for(int i = 0; i < n; i++){
	    ll p; cin >>p; 
	    if(i%2==0) v.push_back(p); 
	}
	ll sum = 0; 
	for(int j = 0; j < v.size(); j++){
	    if(v[j] > 2 * k) sum+= v[j]; 
	}
	cout << sum << '\n'; 
    return 0; 
}
