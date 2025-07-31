class Solution {
public:
    int minBitFlips(int start, int goal) {
         int x = start ^ goal;    // XOR: find differing bits
        int count = 0;
        while (x) {
            count += x & 1;      // count set bits (1s)
            x >>= 1;             // shift right
        }
        return count;
    }
};