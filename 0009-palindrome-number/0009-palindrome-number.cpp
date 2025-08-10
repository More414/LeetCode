class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long ans = 0; // use long long to avoid overflow
        int temp = x;

        while (x > 0) {
            int n = x % 10;
            ans = ans * 10 + n;
            x = x / 10;
        }

        if(temp == ans){
            return true;
        }
        return false;
    }
};
