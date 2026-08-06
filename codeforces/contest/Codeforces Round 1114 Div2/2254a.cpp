#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int,int> freq;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            freq[x]++;
        }

        int mx = 0;
        int val = 0;

        for (auto [x, f] : freq) {
            if (f > mx) {
                mx = f;
                val = x;
            }
        }

        if (mx <= (n + 1) / 2) {
            cout << sum << '\n';
        } else {
            int others = n - mx;
            cout << sum - val * mx + val * (others + 2) << '\n';
        }
    }
}