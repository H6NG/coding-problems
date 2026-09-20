using ll = long long; 
#define pb push_back
#include <vector>
#include <climits>
#include <algorithm>
using namespace std; 

class Solution {
public:
    ll calc_pulse(vector<int>& n){
        ll ans = 0; 
        for(int i = 0; i < n.size(); i++){
            if(i%2==0) ans+=n[i]; 
            else ans-=n[i]; 
        }
        return ans; 
    }
    long long maxValue(vector<int>& nums) {
        ll b = calc_pulse(nums); 
        ll ans = b; 
        int n = nums.size(); 
        vector<ll> p(n+1, 0); 
        for(int i = 0; i < n; i++){
            if(i%2==0) p[i+1]=p[i]+nums[i]; 
            else p[i+1]=p[i]-nums[i]; 
        }
        ll m[2] = {0, LLONG_MIN}; 
        for(int i = 1; i <= n; i++){
            int o = i%2; 
            if(m[o]!=LLONG_MIN){
                ll c = -2LL*(p[i]-m[o]); 
                ans = max(ans,b+c); 
            }
            m[o]=max(m[o],p[i]); 
        }
        return ans; 
    }
};