#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t; 
    int n, k; 
    while(t--){
        cin >> n >> k; // n rows of 2 seats; 
        int rem = k - n; 
        if(rem < 0) cout << 0 << '\n'; 
        else cout << rem * 2 << '\n'; 
    }
    return 0; 
}
