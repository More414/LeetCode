class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // int mid=0;
        int start=0, end=nums.size();

        while(start<end){
            int mid = start + (end - start) / 2;

            if(nums[mid]==target){
                return mid;

            }else if(nums[mid]>target){
                end=mid;
            }
            else
                start=mid+1;

        }
        return start;
        
    }
};