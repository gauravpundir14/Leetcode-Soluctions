class Solution {
public:
    string largestGoodInteger(string nums) {
        
        vector<string> ans;
        for(int i=0;i<nums.size()-2;i++)
        {   string s="";
            if(nums[i]==nums[i+1] and nums[i+1]==nums[i+2])
            {
                int a=3;
                while(a>0)
                {
                    s+=nums[i];
                    a--;
                }
               
            }
           if(s!="") ans.push_back(s);
            
            
        }
        sort(ans.begin(),ans.end());
        return ans.size()>0 ? ans[ans.size()-1]:"";
    }
};