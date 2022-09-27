class Solution {
public:
    void recursion(string alpha [],vector<string> & ans,string temp,string digits,int i)
    {
        if(i>=digits.size())
        {
            ans.push_back(temp);
            return;
        }
        
        int n= digits[i]-'0';
        string val =alpha[n];
       
        
        for(int j=0;j<val.size();j++)
        {
            temp.push_back(val[j]);
             recursion(alpha,ans,temp,digits,i+1);
            temp.pop_back();
            
        }
    }
    
    vector<string> letterCombinations(string digits) {
        string alpha[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        vector<string> ans;
        if(digits.size()==0)
        {
            return  ans;
        }
        recursion(alpha,ans,temp,digits,0);
            return ans;
        
        
    }
};