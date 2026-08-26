#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

/*


ex: 

3
2 3 4 

2 and 3 remove 2, and 3 and 4, remove 3. then 4 is a one array element so YES 
greedy strat is sort and then from left to right if diff <= 1, then min(arr[i], arr[j]); 

*/

int main(){
    int t, n; cin >> t; 
    int trash; 
    while(t--){
        cin >> n; 
        if(n == 1){
            cout << "YES\n"; 
            cin >> trash; 
            continue; 
        }
        vector<int> v(n); //v[n] = all 0s; 
        bool skip = true; 
        for(int i = 0; i < n; i++) cin>>v[i]; 
        sort(v.begin(), v.end()); 
        for(int i = 1; i < v.size(); i++){
            if(v[i]-(v[i-1])>1){
                skip = false; 
                break; 
            }
        }
        skip ? cout << "YES\n" : cout << "NO\n"; 
    }
    return 0; 
}