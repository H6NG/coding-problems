#include <iostream>
#include <string>
using namespace std;

string available(const string& a, const string& b){
    int ea = 0, oa = 0, eb = 0, ob = 0;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] == '1') (i & 1 ? oa : ea)++;
        if (b[i] == '1') (i & 1 ? ob : eb)++;
    }
    return (ea == eb && oa == ob) ? "YES" : "NO";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int ns; cin >> ns;
        string n1, n2; cin >> n1 >> n2;
        cout << available(n1, n2) << '\n';
    }
    return 0;
}