#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int n = stones.size(); 
        int cnt[3] = {0, 0, 0};
        for(int i = 0; i < n; i++){
            cnt[stones[i] % 3]++;
        }
        if(cnt[0] % 2 == 0){
            return cnt[1] > 0 && cnt[2] > 0;
        } else {
            return abs(cnt[1] - cnt[2]) > 2;
        }
    }
};