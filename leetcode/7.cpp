#include <string>
#include <climits>
using namespace std; 

class Solution {
public:
    int reverse(int x) {
        string y = to_string(x); 
        string a; 
        bool neg = false; 
        for(int j = y.size()-1; j >= 0; j--){
            if(y[j] != '-') a+=y[j];
            if(y[j] == '-') neg = true; 
        }
        if(neg) a.insert(0,1,'-'); 
        long long ans = stoll(a); 
        if(ans > INT_MAX || ans < INT_MIN) return 0; 
        return ans; 
    }
};