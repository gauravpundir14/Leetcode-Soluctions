class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
     string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')st.pop();
            else
                st.push(s[i]);
        }
        while(!st.empty())
        {
            char c=st.top();
            ans.push_back(c);
            st.pop();
            
        }
    reverse(ans.begin(),ans.end());
        return ans;
        
    }
};