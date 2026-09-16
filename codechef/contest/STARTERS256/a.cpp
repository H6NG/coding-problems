#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a, b; cin >> a >> b; 
	if((a%2==1 && b%2==0)||(a%2==0 && b%2==1)) cout << -1; 
	else cout << (a - b)/2; 
    return 0; 
}
