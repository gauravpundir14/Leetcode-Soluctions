class Solution {
public:
    int mod=1000000007;
    int countHomogenous(string s) {
        int ans=s.length();
        int count=1;
        
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                ans=(ans+count)%mod;
                count++;
                
            }
            else
            {
                count=1;
            }
        }
        return ans;
    }
};