
/* answer that works, but O(n) 

#include <iostream>
using namespace std; 

int main(){

    long long n, m, sum = 0; 
    cin >> n; 

    for(int i = 1; i <= n; i++){

        if(i%2 == 1) sum+= i * -1; 
        else sum += i; 
    }
    cout << sum; 
    return 0; 
}
*/

// O(1) answer; 

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << -(n + 1) / 2;

    return 0;
}