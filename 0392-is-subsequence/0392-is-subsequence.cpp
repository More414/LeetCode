class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0,i=0;

        if(s.size() ==0 )
        return true;

        while(i<s.size() && j<t.size()){

        
            if(s[i] == t[j] ){
                i++;
            }

            j++;

            if(s.length()==i)
                return true;
        }
            
        
        return false;
    }
};