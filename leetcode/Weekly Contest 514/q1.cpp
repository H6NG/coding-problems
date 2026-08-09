#include <cmath>
#include <vector>
#include <iostream> 
#include <algorithm> 
using namespace std; 

// Answer accepted!

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        //each discount at most one item
        //each item can receive at most one discount
        // item can also receive no discount

        //final price = (p * (100 - d)) / 100
        //final price not rounded

        //return minimum sum of final prices after assignin discounts optimally 

        sort(prices.begin(), prices.end(), greater<int>()); 
        sort(discounts.begin(), discounts.end(), greater<int>()); 
        double sum = 0.0; 

        for(int i = 0; i < prices.size(); i++){
            if(i < discounts.size()) sum+=(prices[i]*(100.0-discounts[i])/100.0); 
            else sum+=prices[i]; 
        }
        return sum; 
    }
};