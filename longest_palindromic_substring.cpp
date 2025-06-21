#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0, maxLen = 1;
        int n = s.length();

        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                --left;
                ++right;
            }
        };

        for (int i = 0; i < n; ++i) {
            expandAroundCenter(i, i);     // Odd length palindrome
            expandAroundCenter(i, i + 1); // Even length palindrome
        }

        return s.substr(start, maxLen);
    }
};


// Example usage
int main() {
    Solution solution;
    string s1 = "babad";
    string s2 = "cbbd";

    cout << "Longest palindrome in '" << s1 << "': " << solution.longestPalindrome(s1) << endl;
    cout << "Longest palindrome in '" << s2 << "': " << solution.longestPalindrome(s2) << endl;

    return 0;
}
