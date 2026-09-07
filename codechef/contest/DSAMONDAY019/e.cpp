#include <vector>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, a; cin >> n >> k; 
    vector<int> v(n);
    for(int &x : v) cin >> x; 
    sort(v.begin(), v.end()); 
    int ans = v[n-1]-v[0]; 
    for(int i = 1; i < n; i++){
        if(v[i] < k) continue; 
        int l = min(v[0]+k, v[i]-k); 
        int h = max(v[n-1]-k, v[i-1]+k);
        ans = min(ans, h - l); 
    }
    cout << ans; 
    return 0; 
}
