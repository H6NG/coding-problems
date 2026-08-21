// easy one 
class Solution {
public:
    int hammingWeight(int n) {
        int ans=0; 
        while(n>0){
            if(n%2==1) ans++; 
            n/=2; 
        }
        return ans; 
    }
};

// prev solution 

/* 

it's a little bit worst because it uses memory

class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> num(n); 
        string a = num.to_string(); 
        int ans = 0; 
        cout<<a; 
        for(int i = 0; i<a.size(); i++){
            if(a[i] == '1') ans++; 
        }
        return ans; 
    }
};

*/
