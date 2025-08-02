class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        int n = basket1.size();
        unordered_map<int,int> cnt;
        for(int i=0;i<n;i++){
            cnt[basket1[i]]++;
            cnt[basket2[i]]--;
        }
        int mi = INT_MAX;
        vector<int> nums;
        for(auto& [x, v]: cnt){
            if (v % 2 != 0) return -1;
            for(int k = abs(v)/2; k > 0; --k)
                nums.push_back(x);
            mi = min(mi, x);
        }
        sort(nums.begin(), nums.end());
        long long ans = 0;
        for(int i = 0; i < (int)nums.size() / 2; ++i){
            ans += min(nums[i], mi * 2);
        }
        return ans;
    }
    
};