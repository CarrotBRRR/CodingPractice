#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        // int hIndex(vector<int>& citations) {
        //     int n = citations.size();
        //     vector<int> count(n + 1, 0);
        //     for(int i = 0; i < n; i++) {
        //         count[min(citations[i], n)]++;
        //     }
        //     int total = 0;
        //     for(int i = n; i >= 0; i--) {
        //         total += count[i];
        //         if(total >= i) {
        //             return i;
        //         }
        //     }
        //     return 0;
        // }

        int hIndex(vector<int>& citations) {
            sort(citations.begin(), citations.end(), greater<int>());

            for (int i=0; i < citations.size(); i++) {
                if (citations[i] <= i) {
                    return i;
                }
            }

            return citations.size();
        }
};