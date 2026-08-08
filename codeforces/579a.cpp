/*


Notes: basically binary rep


*/

#include <iostream> 
#include <bitset>
using namespace std; 

int main(){
    int i; cin >> i; 
    bitset<32> bits(i);  //32 bits

    int ans = 0; 
    for(int i = 0; i < 32; i++){
        if(bits[i] == 1) ans++; 
    }
    cout << ans; 

    return 0; 
}