#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int t; cin >>t;
    int n, k; 
    while(t--){
        cin >> n >> k; 
        if(n <= k){
            cout << n << '\n'; 
            continue; 
        }
        vector<int> dp(20); 
        dp[0] = 0; 
        dp[1] = 1; 
        for(int i = 2; i < 20; i++){
            dp[i] = dp[i-1] * 2; 
        }
        int ans = 0;

        for (int j = 1; j < 20; j++) {
            int m = min(k, n / dp[j]);
            ans += m;
            n -= m * dp[j];
            if (m < k)
                break;
        }
        cout << ans << '\n'; 
    }
    return 0; 
}