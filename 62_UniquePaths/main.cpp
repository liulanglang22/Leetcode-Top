#include <iostream>
#include <vector>

using namespace std;
/*
 * 1.排列组合问题，可以直接C(m+n-2, m-1)解决
 *   但是会溢出
 * 2.动态规划解决
 * */
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> f(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            f[i][0] = 1;
        }
        for (int j = 0; j < n; j++) {
            f[0][j] = 1;
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            }
        }
        return f[m - 1][n - 1];
    }
};
int main() {
    Solution *s = new Solution();
    int a = s->uniquePaths(4, 5);
    cout << a << endl;
    return 0;
}
