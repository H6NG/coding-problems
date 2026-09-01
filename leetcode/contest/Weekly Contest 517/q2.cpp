#define ll long long
const ll mod = 1000000007; 
class Solution {
public:
    long long modPow(ll x, ll y, ll mod){
        ll res = 1; 
        x%=mod; 
        while(y > 0){
            if(y & 1) res = res * x % mod; 
            x = x*x%mod; 
            y/=2; 
        }
        return res;
    }
    int sumDecoded(vector<long long>& nums) {
        ll sum = 0; 
        for(int i = 0; i <nums.size(); i++){
            int width = nums[i]%10; 
            ll d = floor(nums[i]/10); 
            int digits = to_string(d).size(); 
            ll p = 1; 
            for(int i = 0; i < digits-width; i++) p*=10; 
            long long x = d / p;
            long long y = d % p;
            long long decoded_val = modPow(x,y,mod);
            sum= (sum+decoded_val) % mod;
        }
        return sum; 
    }
};