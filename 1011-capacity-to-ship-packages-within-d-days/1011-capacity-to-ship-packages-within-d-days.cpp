class Solution {
public:
    int f(vector<int>& weights,int days,int mid)
    {  int sum=0;
     int count=0;
        for(int i=0;i<weights.size();i++)
        {
            if(sum+weights[i]<=mid)
            {
                sum=sum+weights[i];
            }
            
            else
            {
                sum=0;
                sum+=weights[i];
                count++;
            }
            
            
        }
     if(sum>0)
     count++;
     return  count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(), weights.end());
        int sum=0;
        int ans=0;
        for(int i:weights)
        {
            sum=sum+i;
        }
        int e=sum;
        int mid;
        while(s<=e)
        {   
            mid=s+(e-s)/2;
            if(f(weights,days,mid))
            {   ans=mid;
                e=mid-1;
                
            }
            
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};