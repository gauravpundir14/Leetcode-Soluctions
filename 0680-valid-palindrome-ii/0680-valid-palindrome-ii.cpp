class Solution {
public:
    bool check(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] == s[j])
                i++,j--;
            else
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int a=0;
        int b=s.size()-1;
        while(a<=b)
        {
            if(s[a]==s[b])
            {
                 
                a++;
                b--;
            }
            else
            {
                 return check(s,a+1,b) or check(s,a,b-1);
               
            }
        }
        return true;
        
    }
};