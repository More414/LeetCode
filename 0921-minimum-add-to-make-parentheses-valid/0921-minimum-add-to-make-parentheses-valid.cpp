class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>ch;
        int count=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                ch.push(s[i]);
            }
            else{
                if(ch.empty()){
                    count++;
                }
                else{
                    ch.pop();
                }
            }
        }
        return count+ch.size();
    }
};