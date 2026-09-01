#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, n, a; cin >> t; 
    while(t--){
        vector<int> nums; 
        vector<int> cnt(2,0);
        int curr = 1; 
        int index1; 
        int index2;
        cin >> n; 
        for(int i = 0; i < n; i++){
            cin >> a; 
            if(nums.size() == 0){nums.push_back(a); index1 = curr; cnt[0]++;}
            else if(nums.size() == 1 && nums[0] != a){nums.push_back(a); index2 = curr; cnt[1]++;} 
            else if(a == nums[0]) cnt[0]++; 
            else cnt[1]++; 
            curr++; 
        }
        cnt[0] == 1 ? cout << index1 << '\n' : cout << index2 << '\n'; 
    }
    return 0; 
}