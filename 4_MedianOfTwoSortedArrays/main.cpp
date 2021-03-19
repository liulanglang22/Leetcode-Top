#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int mid, i = 0;
        mid = (m + n) / 2;

        while (m > 0 && n > 0) {
            if (nums1[m - 1] >= nums2[n - 1]) {
                --m;
            } else {
                --n;
            }
            ++i;
            if (mid == i) {
                return ((m + n) % 2) ;
            }
        }

    }
};
int main() {
    vector<int> data(10, 0);

    sort(data.begin(), data.end());
    return 0;
}
