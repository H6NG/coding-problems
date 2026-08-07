

/* 



Notes: 

- n card
- two cards (x and y)
- if x % y == 0 then min(x,y) = winner
- else max(x,y) = winner

- values of the cards are from 2 to n+1
- ex: n = 2 then 2 , 3
- ex: n = 3 then 2 , 3 , 4
- ex: n = 4 then 2 , 3 , 4 , 5

- basically saying if the last digit is a prime number then YES 
*/


#include <iostream> 
#include <cmath> 
using namespace std; 

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){

    int t; cin >> t; 
    while(t--){
        
        int n; cin >> n; 
        
        if(isPrime(n+1)) cout << "YES\n"; 
        else cout << "NO\n"; 
    }
    return 0; 
}