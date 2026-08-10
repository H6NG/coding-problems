#include <cmath>
#include <vector>
#include <iostream> 
#include <algorithm> 
using namespace std; 

class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {

        // int array "parent" size "n" 
        // rooted tree with node from 0 to n-1 
        // root = node 0 and parent = -1 
        // parent[i] means parent of node i 
        
        //int array "nums" of size "n" 
        // where nums[i] means value of node i 
        // weight of a node i at depth d is: nums[i] * (h - d + 1)
        // h = height of tree 

        // return sum of the weigths of all nodes in the tree. 
        // root has depth 1 
        // height is the max depth 
        // thinking of running a BFS

        vector<int> depth; 
        for(int i = 0; i < nums.size(); i++){
            depth.push_back(0); 
        }
        if(parent[0] == -1) depth[0]=1; 
        vector<int> stk;
        for(int j = 1; j < parent.size(); j++){
            if(depth[j] != 0) continue;
            int cur = j;
            while(depth[cur] == 0){ 
                stk.push_back(cur);
                cur = parent[cur];
            }
            while(!stk.empty()){
                depth[stk.back()] = depth[cur] + 1;
                cur = stk.back();
                stk.pop_back();
            }
        }
        int height = *max_element(depth.begin(), depth.end()); 
        long long sum = 0; 
        for(int k = 0; k < nums.size(); k++){
            sum+=1LL*nums[k]*(height-depth[k]+1); 
        }
        return sum; 
    }
};