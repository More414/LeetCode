class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0]=1; //initiall (0,1) in map

        int prefixsum=0, rem, total=0;

        for(int i=0; i<nums.size(); i++){
            prefixsum+=nums[i]; //sum of nums 
            rem=prefixsum % k; 

            if(rem<0) //if rem is negative value then add with k
                rem=k+rem;

            
            if(m.count(rem)){ //if rem present in map 
                total+=m[rem];
                m[rem]++;

            }else
            m[rem]=1;
        }
        return total;
        
    }
};