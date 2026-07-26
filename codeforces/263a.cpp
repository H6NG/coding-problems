/* 

Notes: 

- 5x5 matrix
- 24 zeros
- matrix is beautiful if the single number one of the matrix is located in its middle
- middle = (3x3) 
- let current_pos = (x,y) 
- let middle be (3,3) 
- diff = (x,y) - (3,3) = (a,b) 
- answer = a + b
- btw: take the absolute value because answer can be negative
- mistake not abs(i-2+j-2) it's abs(i-2) + abs(j-2) 

*/

#include <iostream>
#include <cmath>
using namespace std; 

int main(){

    int m,n, val; 

    for(int v = 0; v < 5; v++){
        for(int u = 0; u < 5; u++){
            cin >> val; 
            if(val == 1){
                m = v;
                n = u; 
            }
        }
        cout << '\n';
    }
    cout << abs(m-2)+abs(n-2) << '\n'; 
    return 0; 
}