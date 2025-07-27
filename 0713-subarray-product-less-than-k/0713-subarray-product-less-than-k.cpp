class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product=1, start=0, end=0, n=nums.size(), count=0;

        while(end<n){
            product*= nums[end];

            while(product>=k && start<=end){//start always less than end
                product/=nums[start];
                start++;

            }
            count+=1+(end-start);
            //when the end goes 4th index and start 1st index then  (4-1)=3
            end++;
        }
        return count;
        
    }
};