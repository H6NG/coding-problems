#include <vector>
#include <set> 
using namespace std; 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s; 
        for(int i : nums) s.insert(i); 
        int j = 0;
        for (int val : s) {
            nums[j] = val;
            j++;
        }
        return s.size(); 
    }
};

/* 

Someone really said the following to compact memory lmao: 
He really said: Forget the Solution class. I'm going to hijack the entire program and print the answers myself.


#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

static const auto _ = []() {
    // 1. Desynchronize C++ I/O streams
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 2. Direct pipeline output redirection
    ofstream out("user.out");
    string line;

    // Static buffer allocation (0 heap allocation overhead)
    // Constraints: nums.length <= 3 * 10^4
    static int nums[30005];

    // Main System Loop: Read each array test case directly from standard input
    while (getline(cin, line)) {
        if (line.empty()) continue;

        int total_count = 0;
        int val = 0;
        int sign = 1;
        bool in_num = false;

        // Fast zero-allocation ASCII array parser
        for (char c : line) {
            if (c == '-') {
                sign = -1;
            } else if (c >= '0' && c <= '9') {
                val = val * 10 + (c - '0');
                in_num = true;
            } else if (in_num) {
                nums[total_count++] = val * sign;
                val = 0;
                sign = 1;
                in_num = false;
            }
        }

        if (total_count == 0) {
            out << "[]\n";
            continue;
        }

        // 3. In-Place Two-Pointer Deduplication (O(N) time, O(1) space)
        int k = 1;
        for (int i = 1; i < total_count; ++i) {
            if (nums[i] != nums[k - 1]) {
                nums[k++] = nums[i];
            }
        }

        // 4. Output deduplicated array directly in JSON format: [1,2]
        out << '[';
        for (int i = 0; i < k; ++i) {
            out << nums[i];
            if (i < k - 1) {
                out << ',';
            }
        }
        out << "]\n";
    }

    out.flush();
    exit(0); // HARD TERMINATION: Bypasses host class wrapper teardown
    return 0;
}();

class Solution {
public:
    // Ghost function required to pass compilation
    int removeDuplicates(vector<int>& nums) {
        return 0;
    }
};
*/