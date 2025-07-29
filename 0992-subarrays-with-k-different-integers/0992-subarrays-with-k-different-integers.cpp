class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        //Atlest(k)- Atlest(k+1)
        unordered_map<int, int> freq;
        int total=0;
        int start=0, end=0, n=nums.size(), count=0;
        //for Atlest(k)

        while(end<n){
            freq[nums[end]]++;
            if(freq[nums[end]]==1)
            count++;

            //increase the window size till
            //number of diffrent integer equal to k
            //decrease the window size
            while(count==k){
                total+=n-end; //counting all count ==k 
                freq[nums[start]]--;
                if(freq[nums[start]]==0)
                count--;

                start++;
            }
            end++;
        }

        start=0, end=0, count=0;
        freq.clear();
        k++;

        while(end<n){
            freq[nums[end]]++;
            if(freq[nums[end]]==1)
            count++;
            
             //increase the window size till
            //number of diffrent integer equal to k
            //decrease the window size   

            while(count==k){
                total-=n-end; //removing one by one in total
                freq[nums[start]]--;
                if(freq[nums[start]]==0)
                count--;

                start++;
            }
            end++;
        }

        return total;


        
    }
};