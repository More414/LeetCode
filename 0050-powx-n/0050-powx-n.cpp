class Solution {
public:
    double myPow(double x, int a) {
        long long N = a;  // avoid overflow for INT_MIN
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;
        while (N > 0) {
            if (N % 2 == 1) {
                result *= x;  // multiply when the current bit is set
                N--;
            } else {
                x *= x;  // square the base
                N /= 2;
            }
        }
        return result;
    }
};