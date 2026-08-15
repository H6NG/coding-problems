#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        /* ref version of :
            for (auto it = a.begin(); it != a.end(); ++it) {
                int &x = *it;
                cin >> x;
            }
        */
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool ok = (n >= 2 * m);
        for(int i = 0; ok && i < m; i++)
            if(a[i] >= b[i] || a[n - m + i] <= b[i]) ok = false;
        cout << (ok ? "YES\n" : "NO\n");
    }
}