#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        //hashmap做法
        if (s.size() != t.size()) {
            return false;
        }
        map<char, int> hashMap;
        for (auto it : s) {
            hashMap[it] += 1;
        }
        for (auto it : t) {
            hashMap[it] -= 1;

        }

        for (char c = 'a'; c != 'z'; ++c) {
            if (hashMap[c] != 0) {
                return false;
            }
        }
        return true;
    }
    bool isAnagram_2(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> c(26, 0);
        for (int i = 0; i < s.size(); ++i) {
            c[s[i] - 'a']++;
            c[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (c[i] != 0) return false;
        }
        return true;
    }
    bool isAnagram_3(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
