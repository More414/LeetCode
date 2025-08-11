class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // 0 → 0, 1 → 1

        int ans = 1;
        for (long long i = 1; i <= x; i++) {  // use long long to avoid overflow
            if (i * i == x) return i;         // perfect square
            if (i * i > x) return i - 1;      // crossed sqrt
            ans = i;
        }
        return ans;
    }
};
