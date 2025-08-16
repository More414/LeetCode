class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         unordered_map<char, int> freq;

        // Count frequency of characters in magazine
        for (char c : magazine) {
            freq[c]++;
        }

        // Check ransomNote against available letters
        for (char c : ransomNote) {
            if (freq[c] == 0) return false; // not enough of this char
            freq[c]--;
        }

        return true;
    }
};