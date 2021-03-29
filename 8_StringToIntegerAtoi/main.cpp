#include <iostream>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        short flag = 1;
        int i = 0, res = 0;
        while (s[i++] == ' ') {}
        i--;
        if (s[i] == '-' || s[i] == '+') {
            if (s[i] == '-')flag = -1;
            i++;
        }
        while (isdigit(s[i])) {
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7)) {
                return flag == 1 ? INT_MAX : INT_MIN;
            }
            res = res * 10 + (s[i++] - '0');
        }
        return res * flag;
    }
};

int main() {
    auto *p = new Solution();
    string s = "";
    p->myAtoi(s);
    return 0;
}
