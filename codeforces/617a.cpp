#include <iostream>
using namespace std; 


int main(){

    int n, step = 0; 
    cin >> n; 
    while(n-5>=0){
        n-=5; 
        step++;
    }
    while(n-4>=0){
        n-=4; 
        step++; 
    }
    while(n-3>=0){
        n-=5; 
        step++; 
    }
    while(n-2>=0){
        n-=2; 
        step++; 
    }
    while(n-1>=0){
        n-=1; 
        step++; 
    }

    cout << step; 

    return 0; 
}