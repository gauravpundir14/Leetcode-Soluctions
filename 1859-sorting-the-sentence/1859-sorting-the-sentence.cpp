class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10,"");
        for(int i=0;i<s.size();i++)
        {
            int j=i;
            string temp;
            while(!isdigit(s[j]))
            {
                temp.push_back(s[j]);
                j++;
            }
            ans[s[j]-'0']=temp;
            i=j+1;
        }
        
        string anss;
        for(int i=0;i<10;i++)
        {
            if(ans[i].length()>0)
            {
                anss+=ans[i];
                anss.push_back(' ');
            }
            
        }
        anss.pop_back();
        return anss;
    }
};

 