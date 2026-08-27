#include <vector>
#include <set>
using namespace std; 

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s(candyType.begin(), candyType.end()); 
        int n = candyType.size()/2; 
        if(n >= s.size()) return s.size(); 
        else return n; 
    }
};