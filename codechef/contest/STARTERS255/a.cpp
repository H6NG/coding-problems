#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,f; 
	cin >> x >> y >> f; 
	if(min(x*12,y*12+f) == y*12+f) cout<<y*12+f; 
	else cout << x*12; 
    return 0; 
}
