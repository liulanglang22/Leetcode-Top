#include <iostream>

using namespace std;

class Solution {
public:
    static int hammingWeight(uint32_t n) {
        int ret = 0;
        for (int i = 0; i < 32; i++) {
            if (n & (1 << i)) {
                ret++;
            }
        }
        return ret;
    }
    static int hammingWeight_2(uint32_t n) { 
        int ret = 0;
        while (n) {
            n &= n - 1;
            ret++;
        }
        return ret;
    }
};

int main() {
    uint32_t n = 3;
    Solution::hammingWeight(n);
}