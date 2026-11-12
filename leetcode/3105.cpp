#include <vector>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& s) {
        int ans = 1;
        int curr = 1;
        bool isIncreasing = true;
        
        for (int i = 1; i < s.size(); i++) {
            if (s[i] > s[i-1]) {
                if (isIncreasing) curr++;
                else { 
                    curr = 2; isIncreasing = true; 
                }
            } 
            else if (s[i] < s[i-1]) {
                if (!isIncreasing) curr++;
                else { 
                    curr = 2; isIncreasing = false; 
                }
            } 
            else curr = 1;
            ans = max(ans, curr);
        }
        return ans;
    }
};