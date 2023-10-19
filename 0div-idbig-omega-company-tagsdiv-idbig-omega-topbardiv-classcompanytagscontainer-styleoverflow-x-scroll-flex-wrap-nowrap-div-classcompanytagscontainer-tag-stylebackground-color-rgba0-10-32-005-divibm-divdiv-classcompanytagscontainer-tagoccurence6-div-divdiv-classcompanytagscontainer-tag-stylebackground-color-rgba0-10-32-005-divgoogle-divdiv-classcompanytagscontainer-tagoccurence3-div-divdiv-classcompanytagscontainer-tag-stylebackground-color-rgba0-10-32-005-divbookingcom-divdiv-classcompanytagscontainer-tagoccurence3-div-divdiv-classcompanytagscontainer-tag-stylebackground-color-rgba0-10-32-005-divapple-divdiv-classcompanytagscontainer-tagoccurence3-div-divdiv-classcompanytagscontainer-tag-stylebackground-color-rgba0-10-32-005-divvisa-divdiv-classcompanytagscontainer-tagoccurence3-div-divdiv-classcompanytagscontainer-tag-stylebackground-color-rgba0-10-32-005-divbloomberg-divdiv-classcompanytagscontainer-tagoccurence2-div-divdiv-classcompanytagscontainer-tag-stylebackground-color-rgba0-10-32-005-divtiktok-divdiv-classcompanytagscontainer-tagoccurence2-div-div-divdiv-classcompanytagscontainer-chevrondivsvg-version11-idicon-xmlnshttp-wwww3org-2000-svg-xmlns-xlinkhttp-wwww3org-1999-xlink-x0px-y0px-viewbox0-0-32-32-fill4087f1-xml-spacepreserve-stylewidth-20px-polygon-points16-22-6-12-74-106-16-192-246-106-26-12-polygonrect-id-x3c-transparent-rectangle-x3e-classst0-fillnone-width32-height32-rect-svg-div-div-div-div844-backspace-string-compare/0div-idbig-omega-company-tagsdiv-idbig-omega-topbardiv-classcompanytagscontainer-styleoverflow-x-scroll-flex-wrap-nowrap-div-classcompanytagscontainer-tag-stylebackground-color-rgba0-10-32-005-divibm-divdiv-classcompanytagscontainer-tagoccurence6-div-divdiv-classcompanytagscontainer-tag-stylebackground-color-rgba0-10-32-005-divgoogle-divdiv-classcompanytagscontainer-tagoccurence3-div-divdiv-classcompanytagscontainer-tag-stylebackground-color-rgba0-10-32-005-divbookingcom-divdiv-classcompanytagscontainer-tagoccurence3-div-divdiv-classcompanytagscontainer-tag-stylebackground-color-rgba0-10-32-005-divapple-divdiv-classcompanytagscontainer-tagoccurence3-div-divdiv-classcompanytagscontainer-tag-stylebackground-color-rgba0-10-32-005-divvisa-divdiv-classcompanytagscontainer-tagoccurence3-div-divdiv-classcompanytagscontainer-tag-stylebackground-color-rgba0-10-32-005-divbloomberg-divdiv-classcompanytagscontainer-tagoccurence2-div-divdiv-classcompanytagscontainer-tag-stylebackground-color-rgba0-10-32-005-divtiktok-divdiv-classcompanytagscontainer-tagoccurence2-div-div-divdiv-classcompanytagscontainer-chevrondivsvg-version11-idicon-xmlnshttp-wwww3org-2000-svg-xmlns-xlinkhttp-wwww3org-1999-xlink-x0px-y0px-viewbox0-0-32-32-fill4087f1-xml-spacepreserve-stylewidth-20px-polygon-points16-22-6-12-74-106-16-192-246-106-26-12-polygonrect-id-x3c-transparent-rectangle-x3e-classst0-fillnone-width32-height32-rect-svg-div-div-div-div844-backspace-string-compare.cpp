class Solution {
public:
    bool backspaceCompare(string s, string t) {
        bool check=true;
        stack<char>s1;
        stack<char>s2;
        for(auto i:s)
        {
            if(i=='#')
            {
                if(s1.empty()) continue;
                else
                    s1.pop();
            }
            else
            {
                s1.push(i);
            }
        }
        for(auto i:t)
        {
            if(i=='#')
            {
                if(s2.empty()) continue;
                else
                    s2.pop();
            }
            else
            {
                s2.push(i);
            }
        }
        
        string ans1="";
        string ans2="";
        while(!s1.empty())
        {
            auto i=s1.top();
            s1.pop();
            ans1+=i;
        }
        while(!s2.empty())
        {
            auto i=s2.top();
            s2.pop();
            ans2+=i;
        }
        
        if(ans1.size()!=ans2.size()) 
            check=false;
         else
         {
             for(int i=0;i<ans1.size();i++)
             {
                 if(ans1[i]!=ans2[i])
                 {
                     check=false;
                     break;
                 }
             }
         }
        return check;
    }
};