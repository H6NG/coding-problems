#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 
    int round; 
    bool nop = true; 
    int m; 
    for(int i = 0; i < n; i++){
        cin >> m; 
        round=i/10+1; 
        if(m > 10*round){
            nop = false; 
            break; 
        }
    }
    nop==true ? cout << "Yes" : cout << "No"; 
    return 0; 
}