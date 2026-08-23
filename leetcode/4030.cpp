#include <string>
#include <bitset> 
using namespace std; 

class Solution {
public:
    bool isPalindromic(string s) {
        string b; b.reserve(s.length()*8);
        for(char i : s) b+=bitset<8>(i).to_string(); 
        for(int i = 0; i < b.size()/2; i++){
            if(b[i] != b[b.size()-1-i]) return false; 
        }
        return true;
    }
};