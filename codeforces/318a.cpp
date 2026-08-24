#include <iostream>
#define ll long long
using namespace std; 

int main(){
    ll n, k;
    cin >> n >> k; 
    ll i = (n+1)/2; //one half 
    if(k<=i) cout << 2*k-1; 
    else cout << 2*(k-i); 

    return 0; 
}