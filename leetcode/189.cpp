#include <vector>
#include <queue>
using namespace std; 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int> past; 
        vector<int> copy(nums.begin(), nums.end()); 
        int k2 = k%nums.size(); 
        for(int j = nums.size()-k2; j < nums.size(); j++){
            past.push(nums[j]);
            cout << nums[j] << '\n'; 
        }
        for(int i = k2; i < nums.size(); i++){
            nums[i] = copy[i-k2]; 
        }
        int o = 0; 
        while (!past.empty()) {
            nums[o] = past.front();
            past.pop();
            o++;
        }
    }
};


// I should have used reverse() 
// it will be faster and taking less space. 