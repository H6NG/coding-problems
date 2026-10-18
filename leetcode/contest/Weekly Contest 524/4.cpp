#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
    int minSelection(vector<vector<int>>& availableIntervals, vector<vector<int>>& targetIntervals) {
        // I did that in class 
        // it's a greedy algorithm problem and we need to choose the leftmost point; 
        // we need to know the coverage, at what point we start, and at what point we end

        sort(targetIntervals.begin(), targetIntervals.end()); 
        int start = targetIntervals[0][0]; 
        int end = targetIntervals[0][1]; 
        vector<pair<int,int>> r;
        // pick the first target sorted; 
        for(int i = 1; i < targetIntervals.size(); i++){
            int s = targetIntervals[i][0]; 
            int e = targetIntervals[i][1]; 
            if(s <= end) end = max(end,e); 
            else{
                r.push_back({start,end}); 
                start = s; 
                end = e; 
            }
        }
        r.push_back({start,end}); 
        sort(availableIntervals.begin(), availableIntervals.end()); 
        int interval_count = 0; 
        int rightmost = 0; 
        int farthest = 0; 
        int j = 0; 
        int n = availableIntervals.size(); 

        for(auto& [a,b]:r){
            while (rightmost < b){
                int m = max(a, rightmost); 
                while(j < n && availableIntervals[j][0] <= m){
                    farthest = max(farthest, availableIntervals[j][1]); j++; 
                }
                if(farthest < m || farthest <= rightmost) return -1;
                interval_count++; 
                rightmost = farthest; 
            }
        }
        return interval_count;
    }
};