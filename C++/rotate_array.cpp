#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n;
            reverse(nums.begin(), nums.end());          // 1 2 3 4 5 6 7 -> 7 6 5 4 3 2 1
            reverse(nums.begin(), nums.begin() + k);    // 7 6 5 4 3 2 1 -> 5 6 7 4 3 2 1
            reverse(nums.begin() + k, nums.end());      // 5 6 7 4 3 2 1 -> 5 6 7 1 2 3 4
        }
};