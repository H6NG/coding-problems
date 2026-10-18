#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
    char next_colour(char curr_color){
        if(curr_color=='R') return 'B'; 
        else if(curr_color=='B') return 'W'; 
        return 'R'; 
    }
    int findColoredRoot(vector<vector<int>>& edges, string colors) {
        int n = colors.size(); 
        vector<int> in(n,0), out(n,0); 
        for(auto& edge : edges){
            int u = edge[0], v = edge[1]; 
            out[u]++; out[v]++; 
            if(next_colour(colors[u]) == colors[v]) in[v]++; 
            else if(next_colour(colors[v]) == colors[u]) in[u]++; 
            else return -1; 
        }
        int root = -1; //currently unknown; 
        for(int i = 0; i < n; i++){
            if(in[i]==0){
                if(root != -1) return -1; 
                else root = i; 
            }
        }
        if(root == -1 || out[root]>2) return -1; 
        return root; 
    }
};