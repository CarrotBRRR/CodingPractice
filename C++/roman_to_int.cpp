#include <string>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> romanToIntMap = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            };
            int n = s.size();
            int res = 0;
            for(int i = 0; i < n; i++) {
                if(i < n - 1 && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
                    res -= romanToIntMap[s[i]];
                } else {
                    res += romanToIntMap[s[i]];
                }
            }
            return res;
        }
};