#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int t, n, max_gcd; cin >> t; 
    while(t--){
        cin >> n; 
        long long a; 
        vector<long long> v; 
        while(n--){
            cin >> a;
            v.push_back(a); 
        }
        cout << gcd(v[0], v[v.size()-1]) << '\n';
    }
    return 0; 
}