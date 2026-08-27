#include <iostream>
#include <vector>
#include <set>
using namespace std; 

int main(){
    int n, i; cin >> n; 
    set<int> s; 
    while(n--){
        cin >> i; 
        s.insert(i); 
    }
    vector<int> v(s.begin(), s.end()); 
    v.size()== 1 ? cout << "NO\n" : cout << v[1]; 
    return 0; 
}