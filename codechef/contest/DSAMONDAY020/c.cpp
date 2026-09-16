#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n; 
    map<int, int> a, b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b[x]++;
    }
    bool found = false;
    for (auto [x, freq] : b) {
        if (a[x] < freq) {
            cout << x << " ";
            found = true;
        }
    }
    if (!found) cout << -1;
    return 0; 
}
