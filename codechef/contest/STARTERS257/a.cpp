#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t; 
	while(t--){
	    int n,k; 
	    cin >> n >> k; 
	    int ans = 1; 
	    while(n--){
	        if(ans%k==0){
	            n++; ans++; 
	        }
	        else ans++; 
	    }
	    cout << ans-1 << '\n'; 
	}
    return 0; 
}
