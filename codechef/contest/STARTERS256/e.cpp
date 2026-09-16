#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t; 
	while(t--){
	    int n; cin >> n; 
	    vector<int> v(n); 
	    for(int i = 0; i < n; i++) cin >> v[i]; 
	    bool c = true; 
	    while(c){
	        c = false; 
	        for(int i = 0; i < n-1; i++){
    	        if(v[i]>v[i+1] && abs(v[i] - v[i+1])>1){
    	            swap(v[i], v[i+1]); 
    	            c = true; 
    	        }
    	    }
	    }
	    for(int &x : v) cout << x << ' '; 
	    cout << '\n'; 
	}
    return 0; 
}
