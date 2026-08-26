#include <vector>
#include <string>
using namespace std; 

class Solution {
public:
    string getHint(string secret, string guess) {
        int correct = 0, wrong_place = 0; 
        // since secret.length() == guess.length()
        vector<int> v(10); // 0 to 9
        for(int i = 0; i < secret.size(); i++) v[secret[i] - '0']++; 
        for(int j = 0; j < secret.size(); j++){
            if(guess[j]==secret[j]){
                correct++; 
                v[secret[j] - '0']--;  
            }
        }
        for(int i = 0; i < secret.size(); i++) {
            if(secret[i] != guess[i]) {
                if(v[guess[i] - '0'] > 0) {
                    wrong_place++;
                    v[guess[i] - '0']--;
                }
            }
        }
        return to_string(correct) + "A" + to_string(wrong_place) + "B"; 
    }
};