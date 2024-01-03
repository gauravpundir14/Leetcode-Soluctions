class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        if(n<2) return 0;
        vector<int> temp;
        for(int i=0;i<n;i++)
        {    int count=0;
            for(auto c:bank[i])
            {
                if(c=='1')
                {
                    count++;
                }
            }
         if(count>0)
         temp.push_back(count);
        }
        if(temp.size()<2) return 0;
        int ans=0;
        for(int i=0;i<temp.size()-1;i++)
        {
            ans=ans+(temp[i]*temp[i+1]);
        }
       return ans; 
    }
};