#include <string> 
using namespace std; 

// I should have used reverse(), it would've been easier and faster.

class Solution {
public:
    string reverseWords(string s) {
        string ans; 
        string substring; 
        int nchar = 0; 
        int j; 
        for(int i = 0; i < s.size(); ){
            if (s[i] == ' ') {
                i++;
                continue;
            }
            int j = i;
            while (j < s.size() && s[j] != ' ') {
                substring += s[j];
                j++;
            }
            nchar = j-i; 
            ans+=reverseword(substring); 
            if(j < s.size()-1) ans+= " "; 
            substring = ""; 
            i = j; 
        }
        return ans; 
    }
    string reverseword(string s){
        string ret; 
        for(int i = s.size()-1; i >= 0; i--){
            ret+=s[i]; 
        }
        return ret; 
    }
};