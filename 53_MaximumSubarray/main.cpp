#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int maxSum = nums[0];
        int sum = 0;
        for (int i : nums) {
            sum = max(i, sum + i);
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};

int main() {
    auto *s = new Solution();
    vector<int> num{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    s->maxSubArray(num);
}