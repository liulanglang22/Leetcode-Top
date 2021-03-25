#include <iostream>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> cMap;
        int n = s.size();
        int res = 0;
        int start = 0;
        for (int i = 0; i < n; i++) {
            auto it = cMap.find(s[i]);
            if (it != cMap.end()) {
                start = max((*it).second, start);
            }
            res = max(res, i - start + 1);
            cMap[s[i]] = i + 1;
        }        
        return res;
    }
};