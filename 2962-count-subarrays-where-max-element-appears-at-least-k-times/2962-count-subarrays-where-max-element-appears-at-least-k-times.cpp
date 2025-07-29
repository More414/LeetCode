class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxElement=0, n=nums.size();
        for(int i=0; i<n; i++)
        maxElement=max(maxElement, nums[i]); //finding max element in array;

        long long total=0;

        int count=0, start=0, end=0;

        while(end<n){

            if(nums[end]==maxElement) //if index value is equal to max then increase the count
            count++;

            while(count==k){
                total+= n-end;
                if(nums[start]==maxElement)
                count--;

                start++;

            }

            end++;


        }
        return total;


    }
};