#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T; cin >> T; 
	while(T--){
	    int a; string b;  
	    cin >> a; 
	    int cnt_a1 = 0, cnt_a2 = 0; 
	    cin >> b;
	    for(int i = 0; i < a; i++){
	        if(b[i] == 'a') cnt_a1++; 
	    }
	    cin >> b;
	    for(int i = 0; i < a; i++){
	        if(b[i] == 'a') cnt_a2++; 
	    }
	    if(cnt_a2+cnt_a1 == a) cout << "YES\n"; 
	    else cout << "NO\n"; 
	}
    return 0; 
}
