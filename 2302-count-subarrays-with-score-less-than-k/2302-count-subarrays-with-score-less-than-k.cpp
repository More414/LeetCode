class Solution {
public:
  long long countSubarrays(vector<int>& nums, long long k) {
    long long ans=0;
    long long left=0, right=0, sum=0;

      for(right=0; right<nums.size(); right++){
        sum +=nums[right];
        

        while(sum*(right-left+1)>=k){  // if sum is greater than k 
            sum -=nums[left++];         // sum - left++
        }

        ans+=right-left+1;
       }

      return ans;
   }
};
