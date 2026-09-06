#include <iostream>
#include <vector>
using namespace std;
using ll = long long; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x; 
    cin >> n; 
    vector<ll> a(n), b(n); 
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    bool possible = false; 

    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            possible = true;
            break;
        }
    }
    if (!possible){
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
    for(int i = 0; i < n; ++i){
        cout << (a[i] > b[i] ? 1000000000000000000LL : 1);
        cout << (i + 1 == n ? '\n' : ' ');
    }
}