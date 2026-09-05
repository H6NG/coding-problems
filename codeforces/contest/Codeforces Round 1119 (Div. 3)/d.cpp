#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) zeros++;
        }
        if (zeros == 1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        string ans(n, 'C');

        if (zeros == 0) {
            for (int i = 0; i < n; i++){
                ans[i] = 'A';
            }
        } else {
            bool A = false, B = false;

            for (int i = 0; i < n; i++) {
                if (a[i] == 0) {
                    if (!A) {
                        ans[i] = 'A';
                        A = true;
                    } else if (!B) {
                        ans[i] = 'B';
                        B = true;
                    } else ans[i] = 'A';
                } else ans[i] = 'C';
            }
        }
        cout << ans << '\n';
    }
    return 0;
}