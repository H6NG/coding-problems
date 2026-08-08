//8. String to Integer (atoi)

#include <iostream> 
#include <string>
using namespace std; 

class Solution {
public:
    int myAtoi(string s) {
        bool isN = false;
        bool signSeen = false;
        vector<char> c;

        for (int i = 0; i < s.size(); i++) {

            // Skip leading spaces only
            if (s[i] == ' ' && c.empty() && !signSeen)
                continue;

            // Sign
            if (s[i] == '+' || s[i] == '-') {
                if (signSeen || !c.empty())
                    break;

                signSeen = true;

                if (s[i] == '-')
                    isN = true;

                continue;
            }

            // Digit
            if (s[i] >= '0' && s[i] <= '9') {
                c.push_back(s[i]);
            }
            else {
                // First non-digit after the number
                break;
            }
        }

        if (c.empty())
            return 0;

        long long num = 0;

        for (int i = 0; i < c.size(); i++) {
            num = num * 10 + (c[i] - '0');

            // Overflow check
            if (!isN && num > INT_MAX)
                return INT_MAX;

            if (isN && num > 2147483648LL)
                return INT_MIN;
        }

        if (isN)
            return -num;

        return num;
    }
};