#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 

int main(){

    int n, m, p; cin >> n >> m; 
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> p; v.push_back(p);
    }
    sort(v.begin(), v.end()); 
    int ans = 0; 
    for(int j = 0; j < m; j++){
        if(v[j] <= 0) ans+= v[j]; 
        else break;
    }
    cout << abs(ans); 

    return 0; 
}