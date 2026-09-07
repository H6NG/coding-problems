#include <vector>
#include <iostream>
using namespace std;

class DSU {
public:
    vector<int> parent;
    DSU(int n) {
        parent.resize(n);
        for(int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }
    void unite(int winner, int loser){
        winner = find(winner); 
        loser = find(loser);
        if(winner == loser) return; 
        parent[loser] = winner; 
    }
};

int main() {
	// your code goes here
	int T; cin >> T; // num of testcases
	
	while(T--){
	    int N; cin >> N; // num of chefs and dishes
    	vector<int> S(N+1); //score of the dishes
    	vector<int> maxScore(N + 1);
    	for(int i = 1; i <= N; i++){
    	    cin >> S[i];
    	    maxScore[i] = S[i];
    	}
    	int Q; cin >> Q; 
    	// 0 x y -> print Invalid query if same chef otherwise do nothing
    	// 1 x -> print the index of the chef who currently owns dish x. 
    	DSU chef(N+1); int type; 
	    while(Q--){
    	    cin >> type; 
    	    if(type == 0){
    	        int x, y; cin >> x >> y; 
    	        int a = chef.find(x);
                int b = chef.find(y);
                if(a == b)
                    cout << "Invalid query!\n";
                else if(maxScore[a] > maxScore[b]) {
                    chef.unite(a, b);
                    maxScore[a] = max(maxScore[a], maxScore[b]);
                }
                else if(maxScore[b] > maxScore[a]) {
                    chef.unite(b, a);
                    maxScore[b] = max(maxScore[a], maxScore[b]);
                }
    	    } 
    	    else{
    	        int x; cin >> x; 
    	        cout << chef.find(x) << '\n'; 
    	    }
	    }
	}
    return 0; 
}
