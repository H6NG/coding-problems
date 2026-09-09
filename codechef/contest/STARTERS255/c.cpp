#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,n,a; cin >> T; 
	while(T--){
	    cin >> n; 
	    unordered_map<int, int> freq; 
	    for(int i = 0; i < n; i++){
	        cin >> a; 
	        freq[a]++; 
	    }
	    // we want the max freq. 
	    int max = INT_MIN; 
	    for(auto [x,cnt] : freq){
	        if(cnt > max) max = cnt; 
	    }
	    if(max % 2 == 0) cout << max / 2 << '\n'; 
	    else cout << (max+1)/2 << '\n'; 
	}
    return 0; 
}
