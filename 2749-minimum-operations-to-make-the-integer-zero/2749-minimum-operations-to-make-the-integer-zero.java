class Solution {
    public int makeTheIntegerZero(int num1, int num2) {
        for (int k = 0; k <= 60; k++) {
            long target = (long) num1 - (long) k * num2; // use long to avoid overflow
            if (target >= 0) {
                int bitCount = Long.bitCount(target); // number of set bits in binary
                if (bitCount <= k && k <= target) {
                    return k;
                }
            }
        }
        return -1;
    }
}