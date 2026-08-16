#include <vector>
#include <cmath>
#include <algorithm>
using namespace std; 

class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        // int period 
        // int array lights 
        // lights[i] is the duration in seconds of green phase at ith traffic l
        // time 0, every traffic light starts at the begginning of its green phase
        // every tl starts a new cycle at the same time
        // every cycle last exactly period seconds 
        // red phase at ith tl lasts for period - lights[i]

        // also given an integer array arrivalTime, where arrivalTim[j] is the arrival time in seconds of the jth car 
        // each car must be assigned to exactly ONE traffic light
        // multiple cars can be assigned to the same traffic light
        // any num of cars may cross the same traffic light simultaneously
        // for a car j assigned to the ith traffic light, let 
        // r = arrivalTime[j] % period 
        // if r < lights[i], its waiting_time is 0, 
        // otherwise waiting_time = it's period - r 
        sort(lights.begin(), lights.end(), greater<>());
        int max_light_minute = lights[0]; 
        int min_penalty = 0; 
        for(int i = 0; i<arrivalTime.size(); i++){
            int r = arrivalTime[i]%period; 
            if(r<max_light_minute) continue; 
            else if(min_penalty<period-r){
                min_penalty=period-r; 
            }
        }
        return min_penalty; 
    }
};