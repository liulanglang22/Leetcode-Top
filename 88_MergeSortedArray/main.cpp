#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums2.end());
    }

    static void merge_2(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        while (m > 0 && n > 0) {
            if (nums1[m - 1] >= nums2[n - 1]) {
                nums1[m + n - 1] = nums1[m - 1];
                --m;
            } else {
                nums1[m + n - 1] = nums2[n - 1];
                n--;
            }
        }

        for (; n > 0; --n) {
            nums1[n - 1] = nums2[n - 1];
        }


    }
};

int main() {
    vector<int> nums1{0};
    vector<int> nums2{1};
    Solution::merge_2(nums1, 0, nums2, 1);
    return 0;
}
