#include <queue> 
#include <vector> 

using ll = long long; 
using namespace std; 

vector<ll> dijkstra(int n, vector<vector<pair<int,int>>>& adj, int start){
    vector<ll> dist(n, LLONG_MAX); 
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    dist[start] = 0; 
    pq.push({0, start}); 
    while(!pq.empty()){
        auto [d,u] = pq.top(); 
        pq.pop(); 
        if(d!=dist[u]) continue;
        for(auto [v,w] : adj[u]){
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w; 
                pq.push({dist[v], v});
            }
        }
    }
    return dist; 
}