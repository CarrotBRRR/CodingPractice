#include <vector>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            // if(nums.size() <= 2) {
            //     return nums.size();
            // }
            int i = 0;
            for(int j = 1; j < nums.size(); j++) {
                if(nums[j] == nums[i] && i == 0) {
                    continue;
                } else if(nums[j] == nums[i] && nums[j] == nums[i-1]) {
                    continue;
                } else {
                    nums[++i] = nums[j];
                }
            }
            return i+1;
        }
};