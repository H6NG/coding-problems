#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long; 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        vector<ll> diff(n); 
        ll base = 0; ll minA = 1LL << 60; 
        for(int i = 0; i < n; i++){
            ll a, b; 
            cin >> a >> b;
            base+=b; 
            minA = min(minA,a); 
            diff[i]=a-b;
        }
        sort(diff.begin(), diff.end()); 
        int coupon = (n+1)/2; 
        ll ans = 1LL << 62; 
        long long prefix = 0; 
        for(int p = 0; p <= coupon; p++){
            if(p>0) prefix+=diff[p-1]; 
            ll extra = prefix+1LL*(coupon-p)*minA; 
            ans=min(ans,extra); 
        }
        cout << base + ans << '\n'; 
    }
    return 0; 
}