class Solution {
public:
    string convertToTitle(int c) {
        string ans="";
        while(c>0)
        {
            int rem=c%26;
            if(rem==0)
            {
                ans="Z"+ans;
                c=c/26-1;
            }
            else
            {
                char co='A'+rem-1;
                ans=co+ans;
                c=c/26;
            }
        }
       return ans; 
        
    }
};