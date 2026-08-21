#include <bitset>
#include <string>
using namespace std; 

class Solution {
public:
    int reverseBits(int n) {
        bitset<32> num(n); 
        string a = num.to_string(); 
        string ans;
        for(int i = a.size()-1; i >= 0; i--){
            if(a[i] == '0') ans+="0"; 
            else ans+="1"; 
        }
        unsigned int answer = bitset<32>(ans).to_ulong(); 
        return answer;
    }
};