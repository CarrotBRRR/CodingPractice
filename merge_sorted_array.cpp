#include <vector>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i = m-1, j = n-1, k = m+n-1; // indecies for nums1, nums2 and the merged array
            while(i >= 0 && j >= 0) {
                if(nums1[i] > nums2[j]) {
                    nums1[k--] = nums1[i--];
                } else {
                    nums1[k--] = nums2[j--];
                }
            }

            while(j >= 0) {
                nums1[k--] = nums2[j--];
            }
        }
};