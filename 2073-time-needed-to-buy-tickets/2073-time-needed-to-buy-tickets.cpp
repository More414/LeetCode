class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int target = tickets[k];
        long long time = 0; // use long long to be safe with sums

        for (int i = 0; i < n; ++i) {
            if (i <= k) time += min(tickets[i], target);
            else         time += min(tickets[i], target - 1);
        }
        return (int)time;
    

    }
};