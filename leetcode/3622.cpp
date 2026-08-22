using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        unsigned int m = n; 
        int prod=1, sum=0; 
        while (m > 0) {
            int digit = m % 10;
            sum += digit;
            prod *= digit;
            m /= 10;
        }
        return n%(prod+sum)==0; 
    }
};