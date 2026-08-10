#include <iostream>
#include <cmath> 
#include <vector> 
#include <algorithm>
using namespace std; 


int main(){
    int n; cin >> n; 
    while(n--){
        long long a,b,c; cin >> a >> b >> c;
        vector<int> v; 
        v.push_back(a); v.push_back(b); v.push_back(c); 
        sort(v.begin(), v.end()); 
        if(v[0] + v[1] < v[2]) v[2] = v[0] + v[1]; 
    
        cout << max({v[0], v[1], v[2]})-min({v[0], v[1], v[2]}) << '\n';
    }
    return 0; 
}