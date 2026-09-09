using ll = long long; 

class Solution {
public:
    long long countCommas(long long n) {
        //10^15 = 1000^5 = (10^5^3)
        // 5 
        // 4 
        // 3 
        // 2 
        // 1 
        ll ans = 0; 
        for(ll i = 1000; i <= n; i*=1000){
            ans += n - i + 1;
        }
        return ans; 
    }
};