#include <vector>
using namespace std; 

class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        /* 

        Notes; 
        increasing int arr position where pos[i] = initial pos of ith robot at t = 0; 
        int arr speed where s[i] = constant speed of the ith robot in units per sec and an int distance d; 
        time is continuous and measured in sec. a robot or group with speed v moves v * t (physics) up to the right over any interval of t seconds. 
        after merged, the res group takes the curr pos and speed of rightmost robot
        this doesn't work if the speed is too high. 
        int groups = position.size(); 
        
        if(position.size()==1) return 1; // base case;
        int prev = speed[0]; 
        for(int i = 1; i<speed.size();i++){
            if(speed[i] < prev) groups--; 
            prev=speed[i]; 
        }
        return groups; 
        */
        int n = position.size(); 
        vector<pair<int, int>> groups;

        for (int i = n - 1; i >= 0; --i) {
            if (groups.empty()) {
                groups.push_back({i, i});
                continue;
            }
            int left = groups.back().first;
            int right = groups.back().second;

            if (position[left] - position[i] <= distance ||
                speed[i] > speed[right]) {
                groups.back().first = i;
            } else {
                groups.push_back({i, i});
            }
        }
        return groups.size();
    }
};