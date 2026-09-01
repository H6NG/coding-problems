#include <vector> 
using namespace std; 

class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        //dark squares are all odd numbers when summed 
        if((source[0]+source[1])%2 == 0 && (target[0]+target[1])%2==1) return -1;
        else if((source[0]+source[1])%2 == 1 && (target[0]+target[1])%2==0) return -1; 

        if((source[0]+source[1])==(target[0]+target[1])) return 1; 
        //for another diagonal it's a bit tricker
        if(target[1]-source[1] == target[0]-source[0]) return 1; 
        else return 2; 
    }
};