class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) 
            return nums.size(); // Return directly if size is <= 2

        int count = 2; // Start from index 2 since first 2 elements are always valid

        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] > nums[count - 2]) { // Compare with element 2 steps back
                nums[count] = nums[i];      // Place current element at 'count'
                count++;
            }
        }
        return count; // Length of modified array
    }
};
