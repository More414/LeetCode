class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int n : nums) {
            result ^= n; // XOR each element
        }
        return result;
    }
};
