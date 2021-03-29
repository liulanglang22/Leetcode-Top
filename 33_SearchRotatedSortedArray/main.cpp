#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//
class Solution {
public:
    int search(vector<int> &nums, int target) {
        if (nums.size() == 0) { return -1; }
        if (nums.size() == 1) { return nums[0] == target ? 0 : -1; }
        int left = 0, right = nums.size() - 1;
        int mid = 0;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            if (nums[0] <= nums[mid]) {
                if (nums[0] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if (nums[mid] < target && target <= nums[nums.size() - 1]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }

    int search_2(vector<int> &nums, int target) {
        //暴力搜索
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) return i;
        }
        return -1;
    }
};

int main() {
    auto *p = new Solution();
    vector<int> nums{4, 5, 6, 0, 1, 2, 3};
    p->search(nums, 0);
}