/*
 * C++回溯算法
 * */

#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
    bool check(vector<vector<char>> &board, vector<vector<int>> &visit, int i, int j, string &s, int k) {
        if (board[i][j] != s[k]) {
            //如果当前位置字母不符合直接返回false
            return false;
        } else if (k == s.length() - 1) {
            //这里判断字母是否为最后一个，相等直接返回true
            return true;
        }
        visit[i][j] = true;
        //位置向量，从四个方向都要进行判断
        vector<pair<int, int>> directions{{0,  1},
                                          {0,  -1},
                                          {1,  0},
                                          {-1, 0}};
        bool result = false;
        for (const auto &dir : directions) {
            //四个方向逐个判断
            int newi = i + dir.first, newj = j + dir.second;
            if (newi >= 0 && newi < board.size() && newj >= 0 && newj < board[0].size()) {
                //判断是否在网格内部
                if (!visit[newi][newj]) {
                    //判断该位置字母是否使用过
                    if (check(board, visit, newi, newj, s, k + 1)) {
                        //判断下一个
                        result = true;
                        break;
                    }
                }
            }
        }
        //
        visit[i][j] = false;
        return result;
    }

    bool exist(vector<vector<char>> &board, string word) {
        //创建和网格一样大小的二维数组用来判断是否用过该位置的数
        int m = board.size(), n = board[0].size();
        vector<vector<int>> visit(m, vector<int>(n));

        //从单词的第一位开始遍历判断
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (check(board, visit, i, j, word, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution *s = new Solution();
    vector<vector<char>> board{
            {'A', 'B', 'C', 'E'},
            {'S', 'F', 'C', 'S'},
            {'A', 'D', 'E', 'E'}
    };
    string word = "ABCCED";
    if (s->exist(board, word)) {
        cout << true << endl;
    } else {
        cout << false << endl;
    }
    return 0;
}
