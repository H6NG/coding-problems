#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false; 
    else if(n <= 3) return true; 
    else if(n%2==0||n%3==0) return false; 
    for(int i = 5; i * i <= n; i+=6){
        if(n%i==0||n%(i+2)==0) return false; 
    }
    return true; 
}

int main(){
    int x; cin >> x; 
    isPrime(x)==true ? cout << "yes\n" : cout << "no\n"; 
    return 0;
}