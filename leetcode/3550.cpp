#include <vector>
using namespace std; 

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i]; 
            int sum = 0; 
            for(int j = 1000; j > 0; j/=10){
                int rem = n / j;
                sum+=rem; 
                n%=j;
            }
            if(sum==i) return i; 
        }
        return -1; 
    }
};