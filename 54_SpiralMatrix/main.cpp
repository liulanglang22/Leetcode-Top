#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        if (rows == 0 || cols == 0) {
            return {};
        }
        vector<int> res;
        int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
        while ( left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                res.push_back(matrix[top][i]);
            }
            for (int j = top + 1; j <= bottom; j++) {
                res.push_back(matrix[j][right]);
            }
            if (left < right && top < bottom) {
                for (int k = right - 1; k > left; k--) {
                    res.push_back(matrix[bottom][k]);
                }
                for (int l = bottom; l > top; l--) {
                    res.push_back(matrix[l][left]);
                }
            }
            left++;right--;
            top++;bottom--;

        }
        return res;
    }
};

