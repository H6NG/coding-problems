#include <vector>
#include <cmath>
#include <climits>
using namespace std; 

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        // drone[i] = [xi, yi, rangei] 
        // given a target = [tx,ty] 
        int m = INT_MAX; // min distance
        int index = -1; 
        for(int i = 0; i < drones.size(); i++){
            int dist = abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]); 
            if(dist < m && dist <= drones[i][2]){
                m = dist; 
                index = i; 
            }
        }
        return index; 
    }
};