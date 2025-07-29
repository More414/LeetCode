class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int len =0;
        unordered_map<int, int> count;
        int start=0, end=0, n=nums.size();

        while(end< n){
            count[nums[end]]++; //string all occurence in map

            while(count[nums[end]]>k){ // in occurence is greater than given k
                count[nums[start]]--; //decrease the occurence 
                start++;   // and increase the start
            }

            len=max(len, end-start+1);  //max length 
            end++;
        }
        return len;
    }
};