using ll = long long; 
#include <vector>
using namespace std; 

class Solution {
public:


    int countGoodRotations(vector<int>& nums) {
        int n = nums.size(); 
        int half = n/2; 
        vector<int> v = nums; 
        int ans = 0; 
        ll total = 0; 
        ll first_half = 0; 
        for(int i = 0; i < n; i++){
            total+= v[i]; 
            if(i < half) first_half += v[i]; 
        }
        for(int i = 0; i < n; i++){
            if(2*first_half > total) ans++;
            first_half -= v[i]; 
            first_half += v[(i+half) % n]; 
        }
        return ans; 
    }

    /* 
    int countGoodRotations(vector<int>& nums) {
        int ans = 0; 
        int n = nums.size(); 
        for(int i = 0; i < n; i++){
            ll sumbefore = 0; 
            ll sumafter = 0; 
            for(int j = 0; j < n; j++){
                if(j < n/2) sumbefore+=nums[j]; 
                else sumafter+=nums[j]; 
            }
            if(sumbefore>sumafter) ans++; 
            rotate(nums); 
        }
        return ans; 
    }

    //apparently we don't need to rotate. 
    void rotate(vector<int>& v){
        int first = v.front(); 
        for(int i = 0; i < v.size()-1; i++){
            v[i] = v[i+1]; 
        }
        v[v.size()-1] = first; 
    }*/
};