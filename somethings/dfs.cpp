#include <vector>
using namespace std; 

void dfs(int start, vector<int>& vis, vector<vector<int>>& adj){
    vis[start] = 1;
    for(int next : adj[start]){
        if(!vis[next]){
            dfs(next, vis, adj);
        }
    }
}