// 3Sum 
/* My O(n^3) solution, it passed 311/316 testcases and then TLE on the 5th from last testcase
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort the array ascendent
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans; 
        // base case: 
        if(nums[0]>0 || nums[nums.size()-1]<0) return ans; 
        // from there it's a two sum + nums[index]
        for(auto i = 0; i < nums.size()-2; i++){
            for(auto j = i+1; j < nums.size()-1; j++){
                for(auto k = j+1; k < nums.size(); k++){
                    if(nums[i]+nums[j]+nums[k] == 0 && i!=j && j!=k && i!=k){
                        ans.push_back({nums[i],nums[j], nums[k]}); 
                    }
                }
            }
        }

        // remove duplicates
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end()); 

        return ans; 
    }
};

*/

#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = nums.size();
        vector<vector<int>> ans; 

        sort(nums.begin(), nums.end()); 

        if (nums[0] > 0 || nums[n - 1] < 0) return ans; 

        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue; 

            int gauche = i + 1;
            int droite = n - 1;

            while (gauche < droite) {
                int somme = nums[i] + nums[gauche] + nums[droite];

                if (somme == 0) {
                    ans.push_back({nums[i], nums[gauche], nums[droite]});

                    while (gauche < droite && nums[gauche] == nums[gauche + 1]) gauche++;
                    while (gauche < droite && nums[droite] == nums[droite - 1]) droite--;

                    gauche++;
                    droite--;
                } 
                else if (somme < 0) {
                    gauche++;
                } 
                else {
                    droite--;
                }
            }
        }
        return ans; 
    }
};