class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> temp;
        string se;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){ 
                if(temp.size()>0 ) se.push_back('(');
            temp.push('(');
                          }
            else {
                temp.pop();
               if(!temp.empty()) se.push_back(s[i]);
            }
        }
        return se;
    }
};