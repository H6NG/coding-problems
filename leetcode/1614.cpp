#include <string>
using namespace std; 

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, max_ans = 0; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') ans++; 
            else if(s[i] == ')') ans--; 
            if(ans > max_ans) max_ans = ans; 
        }
        return max_ans; 
    }
};