class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Edge case: empty input
        if (strs.empty()) {
            return "";
        }

        // Step 1: Sort the array of strings
        sort(strs.begin(), strs.end());

        // Step 2: Take the first and last strings
        string first = strs[0];
        string last = strs[strs.size() - 1];

        // Step 3: Compare characters of first and last strings
        int i = 0;
        while (i < first.length() && i<last.length()) {
            if (first[i] != last[i]) {
                break;
                
            }
            i++;
        }

        // Step 4: Return the common prefix
        return first.substr(0, i);
    }
};
