#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static void setZero(vector<vector<int>>& matrix, int i, int j) {
        for (int m = 0; m < matrix[0].size(); m++) {
            matrix[i][m] = 0;
        }
        for (int n = 0; n < matrix.size(); n++) {
            matrix[n][j] = 0;
        }
    }
    static void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<pair<int, int>> zero;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    zero.emplace_back(i, j);
                }
            }
        }
        for (auto & i : zero) {
            setZero(matrix, i.first, i.second);
        }
    }
};
int main() {
    //vector<vector<int>> matrix{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    vector<vector<int>> matrix{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    Solution::setZeroes(matrix);
    return 0;
}
