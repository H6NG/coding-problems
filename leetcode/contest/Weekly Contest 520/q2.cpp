using ll = long long; 
#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        ll ans = 0;
        int n = intervals.size();
        vector<int> ends;
        sort(intervals.begin(),intervals.end());
        for(auto &x:intervals){
            ends.push_back(x[1]); 
        }
        sort(ends.begin(), ends.end()); 
    
        for(int i = 0; i < n; i++){
            int s = intervals[i][0]; 
            int l = 0; 
            int r = ends.size(); 
            while(l < r){
                int mid = l+(r-l)/2; 
                if(ends[mid]>=s) r = mid; 
                else l = mid+1; 
            }
            ans+= i-l; 
        }
        return ans;
    }
};