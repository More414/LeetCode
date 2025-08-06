class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;//2D vector to store the answer

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue; //when the the j and j-> next had same value then run this 
            int j = i+1, k = n-1;
         while(j <k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum <0) {
                j++;
            } else if(sum > 0) {
                k --;
            } else {
                ans.push_back({nums[i], nums[j],nums[k]});
                j++; k --;
                while(j<k && nums[j]==nums[j-1]) j++;
            }
         }
        }
        return ans;
    }
};