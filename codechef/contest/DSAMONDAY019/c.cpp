#include <vector>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n; 
	vector<int> v; 
	for(int i = 0; i < n; i++){
	    int j; cin >> j; 
	    v.push_back(j); 
	}
	int M; cin >> M; 
	for(int &x : v){
	    if(x/(int)pow(2,M) <= 0) cout << "0" << " "; 
	    else cout << x/(int)pow(2,M) << " "; 
	}
    return 0; 
}
