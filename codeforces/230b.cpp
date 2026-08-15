#include <iostream>
#include <cmath>
#define ll long long
using namespace std; 

bool isPrime(int n){
    if(n < 2) return false; 
    for(int i = 2; i*i<=n; i++){
        if(n % i ==0 ) return false;
    }
    return true; 
}
int main(){
    int t; cin>>t;
    ll n; 
    while(t--){
        cin >> n; 
        
        // the only values that are valid for that problem, is 
        // if it's (prime) * (prime) because they can divde by themselves, by 1 and by the prime number
        if(sqrt(n) == (int) sqrt(n) && isPrime(sqrt(n))) cout << "YES\n"; 
        else cout << "NO\n"; 
    }
    return 0; 
}