class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int total= INT_MAX, start=0, end=0;
        int sum=0;

        while(end<nums.size()){ //run til end of given array

            sum+=nums[end]; // adding the numbers

            while(sum>=target){  //if sum is greater than target then only run this line

                total=min(total, end-start+1);

                sum= sum - nums[start];
                start++;// increasing the starting index
            }
            end++; 
        }
        return total==INT_MAX? 0 : total;//this is for they asked in question if empty array then return zero

        // return total;


    }
};