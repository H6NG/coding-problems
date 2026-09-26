#include <string>
#include <map>
using namespace std; 

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans; string ss; 
        map<string,string> lookup; 
        for(auto& x : knowledge){
            lookup[x[0]] = x[1]; 
        }
        bool a = false; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') a = true; 
            else if(s[i] == ')'){
                a = false; 
                if(lookup[ss] == "") ans+="?"; 
                else ans+=lookup[ss]; 
                ss = ""; 
            }
            else if(a == true) ss+=s[i]; 
            else ans+=s[i]; 
        }
        return ans; 
    }
};