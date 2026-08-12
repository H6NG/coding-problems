#include <iostream>
using namespace std; 
#define ll long long

int main(){
    ll n, m; cin >> n >> m; 
    // n represent the num of houses. after nth house is 1. 
    // m represents the tasks and a_i represesnt the house num; 
    ll sum = 0, prev = 1; 
    // Xenia starts from house 1.
    while(m--){
        ll a; cin >> a; 
        //if(a == prev) continue; 
        if(a > prev){
            sum += a-prev; 
            prev = a; 
        } 
        else if(a < prev){
            sum+=(n-prev)+a; 
            prev = a; 
        }
    }
    cout << sum; 
    return 0; 
}