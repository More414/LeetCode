class Solution {
public:
    int hammingWeight(int n) {
         int count = 0;
    while (n > 0) {
        count += (n & 1); // Add 1 if last bit is set
        n >>= 1;          // Shift right
    }
    return count;
    }
};