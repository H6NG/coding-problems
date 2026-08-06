#include <iostream>
using namespace std; 


int main(){

    int n, k, prev, a = 0; cin >> n >> k; 
    for(int i=0; i<n; i++){
        int m; cin >> m; 
        if(m > 0 && i < k) a++; 
        else if(m > 0 && i >= k && m == prev){
            a++; 
        }
        else if(m > 0 && i >= k && m != prev) break; 
        prev = m; 
    }
    cout << a; 
    return 0; 
}