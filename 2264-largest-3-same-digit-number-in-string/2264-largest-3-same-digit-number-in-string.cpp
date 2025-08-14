class Solution {
public:
    string largestGoodInteger(string num) {
         int i = 0, j = 1, n = num.size();
        int count = 1;
        char maximum = 0;

        while (j < n) {
            if (num[i] == num[j]) {
                j++;
                count++;
            } else {
                if (count >= 3) {
                    maximum = max(maximum, num[i]);
                }
                i = j;
                j++;
                count = 1;
            }
        }

        // Check last sequence after loop ends
        if (count >= 3) {
            maximum = max(maximum, num[i]);
        }

        // If no good integer found
        if (maximum == 0) return "";

        return string(3, maximum);
        
    }
};