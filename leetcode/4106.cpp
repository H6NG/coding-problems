#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans; 
        vector<string> sub;
        string a; 
        string b; 
        for(int i = 0; i <= s1.size(); i++){
            if(s1[i] == s2[i] && a.empty()) continue; 
            else if(s1[i] == s2[i] && !a.empty()){
                sub.push_back(a); 
                sub.push_back(b); 
                ans.push_back(sub); 
                sub.clear(); 
                a = ""; b = ""; 
            }
            else{
                a+=s1[i]; b+= s2[i]; 
            }
        }
        if(!a.empty()){
            sub.push_back(a); 
            sub.push_back(b); 
            ans.push_back(sub); 
        }
        return ans; 
    }
};