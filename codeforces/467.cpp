#include <iostream>
using namespace std; 

int main(){

    int room, r = 0; cin >> room; 
    for(int i = 0; i < room; i++){
        int n, m; cin >> n >> m; 
        if(m - n > 1) r++; 
    }
    cout << r; 
    return 0; 
}