class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>ump;
        char ans;
        for(int i=0;i<s.size();i++)
        {   
            ump[s[i]]++;
            if(ump[s[i]]==2)
            {   ans=s[i];
                 break;
            }
           
                
            
        }
            
        return ans;
    }
};