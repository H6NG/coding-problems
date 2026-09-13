#include <queue>
#include <vector>
using namespace std; 

void bfs(int start, vector<int>& vis, vector<vector<int>>& adj){
    queue<int> q; 
    q.push(start); 
    vis[start] = true; 
    while(!q.empty()){
        int u = q.front(); 
        q.pop(); 
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = true; 
                q.push(v); 
            }
        }
    }
}