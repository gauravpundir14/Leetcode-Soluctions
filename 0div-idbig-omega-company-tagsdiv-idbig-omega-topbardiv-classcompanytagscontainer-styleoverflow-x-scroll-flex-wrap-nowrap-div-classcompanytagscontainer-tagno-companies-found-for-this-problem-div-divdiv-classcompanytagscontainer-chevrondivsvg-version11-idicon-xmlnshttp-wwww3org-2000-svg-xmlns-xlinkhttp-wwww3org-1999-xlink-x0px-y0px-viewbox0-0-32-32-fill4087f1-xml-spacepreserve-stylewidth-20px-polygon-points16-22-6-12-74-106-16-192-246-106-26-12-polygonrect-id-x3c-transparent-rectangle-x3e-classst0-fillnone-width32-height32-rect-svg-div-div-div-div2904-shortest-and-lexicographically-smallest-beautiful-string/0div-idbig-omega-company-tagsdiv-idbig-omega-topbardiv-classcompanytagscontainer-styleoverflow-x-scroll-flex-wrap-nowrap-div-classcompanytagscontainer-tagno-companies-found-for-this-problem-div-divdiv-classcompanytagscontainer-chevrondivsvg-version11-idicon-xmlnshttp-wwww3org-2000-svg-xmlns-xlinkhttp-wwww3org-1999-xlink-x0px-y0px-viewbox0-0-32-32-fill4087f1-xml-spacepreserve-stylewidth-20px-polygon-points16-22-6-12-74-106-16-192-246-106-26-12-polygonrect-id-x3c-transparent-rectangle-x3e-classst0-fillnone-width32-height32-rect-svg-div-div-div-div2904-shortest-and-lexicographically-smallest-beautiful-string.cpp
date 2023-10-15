class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       int count=0;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {  count=0;
                for(int k=i;k<=j;k++)
                {
                    if(s[k]=='1')
                    {
                        count++;
                    }
                }
                    if(count==k)
                    {
                        string st=s.substr(i,j-i+1);
                        if(ans.size()==0 or ans.size()>st.size())
                        {
                            ans=st;
                        }
                        else if(ans.size()==st.size())
                        {
                            ans=min(ans,st);
                        }
                    
                }
            }
        }
        return ans;
    }
};