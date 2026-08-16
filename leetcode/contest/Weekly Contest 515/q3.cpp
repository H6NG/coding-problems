#include <vector>
#include <cmath>
#include <string>
using namespace std; 

class Solution {
public:
    int maximumGap(string skill, string station) {
        // string skill of length n
        // string station of length m 
        // skill[i] == skill of worker i, station[j] == skill supported by station j 
        // assign every worker to a distinct station 
        // let ji be the index of the station assigned to worker i 
        // one worker -> gap = 0; 
        // assigned station indices must be strictly increasing in worker order meaning j0<j1<j2...<jn-1

        //return max possible gap among all valid assignments 

        int n = skill.size();
        int m = station.size();
        
        vector<int> left(n);
        vector<int> right(n);

        int prev = 0;

        for (int i = 0; i<n; i++) {
            for (int j = prev; j<m; j++) {
                if (skill[i] == station[j]) {
                    left[i] = j;
                    prev = j+1;
                    break;
                }
            }
        }
        prev = m-1;

        for (int i=n-1; i>=0; i--) {
            for (int j = prev; j >= 0; j--) {
                if (skill[i] == station[j]) {
                    right[i] = j;
                    prev = j-1;
                    break;
                }
            }
        }
        int max_gap = 0;
        
        for (int i=1; i<n; i++) {
            max_gap = max(max_gap, right[i]-left[i-1]);
        }
        return max_gap;
    }
};