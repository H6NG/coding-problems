// Good but Time-Complexity Reached at TLE.


#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; 
    cin >> n >> q; 
    int p, a; 
    list<int> v;
    for(int i = 0; i < n; i++){
        cin >> p; 
        v.push_back(p); 
    }
    for(int j = 0; j < q; j++){
        cin >> a; 
        auto it = find(v.begin(), v.end(), a);
        v.erase(it);
        v.push_back(a); 
    }
    for(auto x : v){
        cout << x << " ";
    }
    return 0; 
}