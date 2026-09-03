#include <vector>
using namespace std;

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        /*

            even − odd = odd
            odd − even = odd
            even − even = even
            odd − odd = even

        */
        sort(nums1.begin(), nums1.end());
        bool o = false;
        bool e = false;
        for (int x : nums1) {
            if (x % 2) o = true;
            else e = true;
        }
        if (!o || !e) return true;
        if (nums1[0] % 2 == 0) return false;
        return true;
    }
};