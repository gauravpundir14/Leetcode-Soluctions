class Solution {
public:
    string defangIPaddr(string a) {
        string ans;
        
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='[' or a[i]==']') continue;
            else if(a[i]=='.')
                ans=ans+'['+'.'+']';
            else
                ans=ans+a[i];
        }
        return ans;
    }
};