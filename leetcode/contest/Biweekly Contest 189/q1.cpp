#include <vector> 
using namespace std; 

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        if(requests.empty()) return 0; 
        long long ans = requests[0]; 
        for(int i = 1; i < requests.size(); i++){
            ans += abs(requests[i-1]-requests[i]); 
        }
        return ans; 
    }
};