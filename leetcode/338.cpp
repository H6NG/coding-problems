
#include <vector>
using namespace std; 

// not going to lie, I used google to search (i&1)+v[i/2]. 
// I knew there was a dp O(1) solution

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1); 
        for(int i=0; i<=n; i++){
            v[i]=(i&1)+v[i/2]; 
        }
        return v; 
    }
};