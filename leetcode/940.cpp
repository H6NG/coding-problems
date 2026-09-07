using ll = long long; 
const ll MOD = 1e9+7; 
#include <vector>
#include <string>
using namespace std; 

class Solution {
public:
    int distinctSubseqII(string s) {

        vector<ll> alpha(26); 
        vector<ll> last(26);
        ll dp = 1; 
        for(char &x : s){
            alpha[x-'a']++; 
            int i = x - 'a';
            ll newdp = (2 * dp - last[i] + MOD) % MOD;
            last[i] = dp;
            dp = newdp;
        }
        return ((dp-1+MOD)%MOD); 
    }
};