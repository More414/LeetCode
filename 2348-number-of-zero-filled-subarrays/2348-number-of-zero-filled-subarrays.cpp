class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0, count = 0;
        for (int n : nums) {
            if (n == 0) {
                count++;            // extend streak
                result += count;    // add all subarrays ending here
            } else {
                count = 0;          // reset streak
            }
        }
        return result;
    }
};