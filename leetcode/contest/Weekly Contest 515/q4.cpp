#include <vector>
#include <cmath>
#include <climits>
using namespace std; 

class Solution {
public:
    long long elevatorRequests(int n, int start, vector<vector<int>>& requests) {
        int m = requests.size();
        int total = 1 << m;

        // dp[mask][i] = minimum time after fulfilling all requests in mask,
        // with the elevator currently at request i's floor.
        vector<vector<long long>> dp(total, vector<long long>(m, LLONG_MAX));

        // Start by fulfilling each possible first request.
        for (int i = 0; i < m; i++) {
            long long travel = abs(start - requests[i][1]);
            // We may have to wait until the request arrives.
            long long time = max(travel, (long long)requests[i][0]);
            dp[1 << i][i] = time;
        }

        // Try every subset of fulfilled requests.
        for (int mask = 1; mask < total; mask++) {
            for (int i = 0; i < m; i++) {
                // i must be the current/last fulfilled request.
                if (!(mask & (1 << i))) continue;
                if (dp[mask][i] == LLONG_MAX) continue;

                long long currTime = dp[mask][i];
                // Try fulfilling another request j.
                for (int j = 0; j < m; j++) {

                    if (mask & (1 << j)) continue;
                    long long travel = abs(requests[i][1] - requests[j][1]);
                    long long arrivalTime = currTime + travel;
                    // If request j hasn't arrived yet, wait.
                    long long newTime = max(arrivalTime, (long long)requests[j][0]);
                    int newMask = mask | (1 << j);
                    dp[newMask][j] = min(dp[newMask][j], newTime);
                }
            }
        }
        // All requests fulfilled.
        int fullMask = total - 1;
        long long answer = LLONG_MAX;
        for (int i = 0; i < m; i++) answer = min(answer, dp[fullMask][i]);
        return answer;
    }
};