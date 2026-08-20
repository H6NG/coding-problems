// Most easiest and time consuming
// I wanted to create a code that is O(n), I knew it was possible
// instead of O(n^2) a no brainer. 

#include <iostream>
#include <vector> 
using namespace std; 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int indexm = m - 1;
        int indexn = n - 1;
        int index = m + n - 1;

        while (indexn >= 0) {
            if (indexm >= 0 && nums1[indexm] > nums2[indexn]) {
                nums1[index] = nums1[indexm];
                indexm--;
            } 
            else {
                nums1[index] = nums2[indexn];
                indexn--;
            }
            index--;
        }
    }
};