class Solution {
public:
    bool isValid(string s) {

        stack<char>ch;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                ch.push(s[i]);
            }
            else{
                if(ch.empty()){
                    return 0;
                }else if(s[i]==')'){
                    if(ch.top()!='(')
                    return 0;
                    else
                    ch.pop();
                }
                else if(s[i]=='}'){
                    if(ch.top()!='{')
                    return 0;
                    else
                    ch.pop();
                }else if(s[i]==']'){
                    if(ch.top()!='[')
                    return 0;
                    else
                    ch.pop();
                }

            }
        }
        return ch.empty();
        
    }
};