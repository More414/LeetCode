class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
       
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
                // use n
                result =result^ n; // XOR each element
        }
         return result;
    }
};
