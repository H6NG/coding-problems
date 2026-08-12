#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int m; cin >> m; 
    while(m--){
        int n,k; cin >> n >> k; //n is the size of array A and k is the number that product must be divisble by. 
        // what is great is that k is 2 <= k <= 5
        // so output is always closed to a boundary.
        vector<int> v(10,0); 
        //{0,0,0,0,0,0,0,0,0,0,0,0} 1-based indexed array
        int ans = 0; 
        while(n--){
            int p; cin >> p; 
            v[p-1]++; 
        }
        switch (k){
            case (2): 
                if(v[1]!=0 || v[3]!=0 || v[5]!=0 || v[7]!=0 || v[9]!=0) ans=0;  // multiple of 2
                else ans=1; 
                break; 
            case (3): 
                if(v[2]!=0 || v[5]!=0 || v[8]!=0) ans=0; // multiple of 3 
                else if (v[1]!=0 || v[4]!=0 || v[7]!=0) ans = 1;
                else ans = 2; 
                break; 
            case 4:{
                int even  = v[1] + v[3] + v[5] + v[7] + v[9]; // values 2,4,6,8,10
                int mult4 = v[3] + v[7]; // values 4,8 are multiples of 4
                if (mult4 || even >= 2) ans = 0;
                else if (even == 1 || v[2] || v[6]) ans = 1;  // second even, or 3/7 -> 4/8
                else ans = 2; // two odds -> two evens
                break;
            }
            case (5):
                if(v[4] != 0 || v[9] != 0) ans = 0;
                else if(v[3] != 0 || v[8] != 0) ans = 1;
                else if(v[2] != 0 || v[7] != 0) ans = 2;
                else if(v[1] != 0 || v[6] != 0) ans = 3;
                else ans = 4;
                break;
            default: 
                break; 
        }
        cout << ans << '\n'; 
    }
    return 0; 
}