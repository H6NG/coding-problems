#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 

// Note: The children cannot necessarily be mixed between groups.

int main(){
    int n; cin >> n; // n = num of groups of schoolchildren
    double ans = 0, m; 
    vector<int> v(4,0);
    while(n--){
        cin >> m; 
        v[m-1]++; //because array starts at 0; 
    }
    // 4 is already complete 
    // 3 + 1
    // 2 + 2
    ans+= v[3]; v[3] = 0; 
    if(v[2] < v[0] && v[0] != 0){
        // select all the 3 + 1 
        ans+= v[2]; v[0]-=v[2]; v[2] = 0;
    }
    if(v[2] == v[0]){
        ans+= v[2]; v[2]=0; v[0]=0; 
    }
    if(v[2] > v[0] && v[0] != 0){
        ans += v[0]; v[2] -= v[0]; v[0] = 0; 
    }
    if(v[2] > v[0] && v[0] == 0){
        ans+=v[2]; v[2]=0; 
    }

    // now, for the 2s; we can match with the 1s;
    ans += v[1] / 2;
    v[1] %= 2;
    // one remaining group of 2 can take two groups of 1
    if(v[1] == 1){
        ans++; v[0] = max(0, v[0] - 2);
    }
    // remaining groups of 1
    ans += ceil(v[0]/4.0);
    cout << ans; 
    return 0; 
}