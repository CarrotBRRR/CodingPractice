#include <vector>
using namespace std;

class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int i = 0;
            while(i < nums.size()){
                if(nums[i] == 0){
                    break;
                }

                i += nums[i];
            }

            int n = nums.size() + nums.end() - 1
            if(i == n){
                return true;
            } else {
                return false;
            }
        }
};