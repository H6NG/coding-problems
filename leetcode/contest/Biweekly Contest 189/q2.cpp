
#include <cmath>
#include <string>
#include <climits>
using namespace std; 

class Solution {
public:
    int minOperations(string s) { 
        // two following ops allowed:
        // increment and after 'z' is 'a' 
        // left rotate
        // obs: a palindrome doesn't have to be a even or odd num of char
        // obs: for each char s[i], it needs to match s[s.size()-i] 
        int nops = 0; 
        // we need to try to simulate all rotations and give the minimum
        auto diff = [](char a, char b){
            int x = (a-b+26)%26; 
            int y = ((b-a)+26)%26; 
            return min(x,y); 
        }; 
        int ans = INT_MAX; 
        for(int i = 0; i<s.size(); i++){
            nops = i; 
            for(int j = 0; j < s.size()/2; j++){
                char a = s[(i+j)%s.size()]; 
                char b = s[(s.size()-1+i-j)%s.size()]; 
                nops += diff(a,b); 
            }
            ans = min(ans, nops); 
        }
        return ans; 
    }
};