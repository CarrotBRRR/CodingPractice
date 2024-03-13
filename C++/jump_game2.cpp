#include <vector>
using namespace std;

class Solution {
    public:
        int jump(vector<int>& nums) {
            int n = nums.size();
            int maxReach = 0;
            int jumps = 0;
            int lastJump = 0;
            for(int i = 0; i < n - 1; i++) {
                maxReach = max(maxReach, i + nums[i]);
                if(i == lastJump) {
                    jumps++;
                    lastJump = maxReach;
                }
            }
            return jumps;
        }
};