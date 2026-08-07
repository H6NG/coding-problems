

/* 

Notes:
- the color or the ith module is represented by the integer a_i.
- [1, ..., n] modules 
- adjacent meaning [i and i+1] where i is in [1, n-1] have to have different colors 

- my idea is to record the frequency, the num of different num and the total num of elements

- swap two adjacent remaining modules at most once
- That is not allowed: "but then what if after a swap of a and a+1, the new a+1 swap with a+2"

- idea 1; oh... what if we run check() which said, second element of pair a should always be the same as first element of pair b... 
but you don't know which one's whcih and then answer would be like the number of valid pairs - the num of bad pairs.
*/

#include <iostream>
#include <vector>
using namespace std; 

int main(){

    int t; cin >> t; 
    while(t--){

        int n; cin >> n;    
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> col, len;
        for(int i = 0; i < n; ){
            int j = i;
            while(j < n && a[j] == a[i]) j++;
            col.push_back(a[i]);
            len.push_back(j - i);
            i = j;
        }
        
        int R = (int)col.size();
        int gain = 0;
        for(int i = 0; i + 1 < R; i++){
            if(len[i] >= 2 && len[i+1] >= 2){ gain = 2; break; }
        }
        if(gain < 2){
            for(int i = 0; i < R; i++){
                if(len[i] < 2) continue;
                if(i + 1 < R && (i + 2 >= R || col[i+2] != col[i])){ gain = 1; break; }
                if(i - 1 >= 0 && (i - 2 < 0 || col[i-2] != col[i])){ gain = 1; break; }
            }
        }
        cout << R + gain << "\n";
    }
    return 0;
}