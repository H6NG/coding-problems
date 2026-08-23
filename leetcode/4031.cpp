#include <vector>
#include <unordered_set>
using namespace std; 

class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> v; 
        unordered_set<int> s(nums.begin(), nums.end()); 
        int j = lower; 
        while(j <= upper){
            if(s.find(j)!=s.end()){
                j++; continue; 
            }
            int start = j; 
            while (j <= upper && s.find(j) == s.end()) j++;
            v.push_back({start, j - 1});
        }
        return v; 
    }
};