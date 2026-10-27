#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans; 
        string sans; 
        for(int i  = 0; i < m-1; i++){
            sans=""; 
            sans+="."; 
            for(int j = 0; j < n-1; j++){
                sans+="#"; 
            }
            ans.push_back(sans); 
        }
        string b; 
        for(int i = 0; i < n; i++){
            b+="."; 
        }
        ans.push_back(b); 
        return ans; 
    }
};