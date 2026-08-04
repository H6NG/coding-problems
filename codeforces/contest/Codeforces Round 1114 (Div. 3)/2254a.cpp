#include <iostream>
#include <algorithm>
using namespace std; 

int main(){
    int n; cin >> n; 
    for(int i = 0; i < n; i++){
        int a,b,c; cin >> a >> b >> c; 
        if(a == b || a == c || b == c) cout << 0 << '\n';
        else{
            int ma = max({a,b,c}); 
            int mi = min({a,b,c}); 
            int middle = a + b + c - ma - mi; 
            int round = 0; 

            while(ma != mi && middle != mi && middle != ma){
                ma-= 1;
                mi+= 1;
                round++; 
            }
            cout << round << '\n'; 
        }
    }
    return 0; 
}