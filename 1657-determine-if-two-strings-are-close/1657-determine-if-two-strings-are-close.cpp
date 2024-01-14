class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>w1(26,0);
        vector<int>w2(26,0);
        
        for(auto i:word1)
        {
            w1[i-'a']++;
        }
        
        for(auto i:word2)
        {
            w2[i-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if ((w1[i] == 0 && w2[i] != 0) || (w1[i] != 0 && w2[i] == 0))
            {
                return false;
            }
        }
        
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        for(int i=0;i<26;i++)
        {
            if(w1[i]!=w2[i])
            {
                return false;
            }
        }
       return true; 
    }
};