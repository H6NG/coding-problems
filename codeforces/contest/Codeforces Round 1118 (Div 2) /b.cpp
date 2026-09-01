#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    int t; cin >> t; 
    int n, m; 
    while(t--){
        cin >> n >> m; 
        vector<int> freq(m + 1, 0);
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            freq[a]++;
        }
        vector<int> atLeast(m + 2, 0);
        for (int x = m; x >= 1; x--) atLeast[x] = atLeast[x + 1] + freq[x];
        int best = 0;

        for (int x = 1; x <= m; x++) {
            int ans = atLeast[x];
            if (2 * x <= m) ans += freq[2 * x];
            best = max(best, ans);
        }
        cout << best << '\n';
    }
    return 0; 
}