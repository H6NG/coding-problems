#include <string>
using namespace std; 

class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(); 
        int score = 0; 
        char prev; 
        for (int r = 0; r < n; r++){
            int internal_score = 0; 
            prev = s[0]; 
            for(int i = 1; i < n; i++){
                if(s[i] == prev) internal_score++; 
                else prev = s[i]; 
            }
            if(internal_score == k) score++; 
            s = rotates(s); 
        }
        return score; 
    }
    string rotates(string &s){
        if(s.empty()) return ""; 
        char first = s[0]; 
        for(int i = 0; i < s.size()-1; i++){
            s[i] = s[i+1]; 
        }
        s[s.size()-1] = first; 
        return s; 
    }
};