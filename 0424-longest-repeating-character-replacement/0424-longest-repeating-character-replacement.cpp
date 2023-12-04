class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        vector<int>count(26,0);
        int maxcount = 0;
        int result=0;
        
        while(j<s.length())
        {
            count[s[j]-'A']++;
            maxcount=max(maxcount,count[s[j]-'A']);
            if(j-i+1-maxcount>k)
            {
                count[s[i]-'A']--;
                i++;
            }
            result = max(result, j - i + 1);
            j++;
        }
        return result;
    }
};