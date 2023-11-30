class Solution {
public:
    int minimumOneBitOperations(int n) {
        if(n==0)
            return 0;
        vector<long long>ans(31,0);
        ans[0]=1;
        int result=0;
        int sign=1;
        for(int i=1;i<=30;i++)
        {
            ans[i]=2*ans[i-1]+1;
        }
        for(int i=30;i>=0;i--)
        {
            int bit=((1 << i) & n);
            
            if(bit==0) continue;
            
            if(sign>0)
            {
                result+=ans[i];
            }
            else
            {
                result-=ans[i];
            }
            sign=sign*-1;
            
        }
            
        return result;
    }
};