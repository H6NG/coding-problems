#include <queue> 
#include <vector>
#include <climits>
#include <algorithm>

using namespace std; 
using ll = long long; 
using pii = pair<ll,ll>;

vector<ll> astar(int n, vector<vector<pair<int,int>>>& adj, int start, int goal, vector<ll>& h){
    vector<ll> dist(n, LLONG_MAX); 
    priority_queue<pii, vector<pii>, greater<pii>> pq; 
    dist[start] = 0; 
    pq.push({h[start], start}); 
    while(!pq.empty()){
        auto[f, u] = pq.top(); 
        pq.pop(); 
        if(u == goal) break;
        for(auto [v, w] : adj[u]){
            ll g = dist[u] + w; 
            if(g < dist[v]){
                dist[v] = g;
                ll f = g + h[v]; 
                pq.push({f,v}); 
            }
        }
    }
    return dist; 
}