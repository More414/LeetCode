class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<bool> count(256, 0); //initiall 256 size strage to store the all possible char, numbers, symbols wit initially 0;
        int first=0, second=0, len=0;

        while(second<s.size()){ // run till sencond rach last index

            while(count [s[second]]){ // for moving first to non repiting element
            count [s[first]]=0;  
            first++;

            }
            count [s[second]]=1; // once second check the element then make as 1
            len=max(len, second-first+1);
            second++;

            
        }
        return len;

    }
};