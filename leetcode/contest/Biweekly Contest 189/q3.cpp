
#include <string>
using namespace std; 

class Solution {
public:
    int kthDigit(long long k) {
        // there's no way there's a relationship between the num and the rank 
        // let's see. 
        /*
        the string starts with the integers 1 through 9, followed by 19 through 10, then 20 through 29, then 39 through 30, and so on.
        */
        // 1 to 9 -> 1,2,3,4,5,6,7,8,9
        // 19 to 10 -> 19,18,17,16,15,14,13,12,11,10 -> index [10, ..., 28] = 18
        // 20 to 29 -> 20,21,22,23,24,25,26,27,28,29 -> 20 digits in-between 
        // ... 
        // 99 to 90 -> 99,98,97,96,95,94,93,92,91,90
        
        if(k <= 9) return k; 
        k-=9; 
        long long first = 10;
        long long d = 2;

        while (true) {
            long long numBlocks = 9 * (first / 10);
            __int128 digitsInRange = (__int128)numBlocks * 10 * d;

            if (k > digitsInRange) {
                k -= digitsInRange;
                first *= 10;
                d++;
                continue;
            }

            long long block = (k - 1) / (10 * d);
            long long pos = (k - 1) % (10 * d);
            long long numberIndex = pos / d;
            long long digitIndex = pos % d;
            long long b = first / 10 + block;

            long long number;

            if (b % 2 == 0) number = 10 * b + numberIndex;
            else number = 10 * b + 9 - numberIndex;
            string s = to_string(number);
            return s[digitIndex] - '0';
        }
            
    }
};