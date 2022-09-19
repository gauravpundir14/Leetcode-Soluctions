class Solution {
public:
    
    
    bool bloom(vector<int>& bloomDay,int mid, int m, int k)
    {  
        int flower=0,bouq=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                flower++;
            }
            else
            {
                flower=0;
            }
            
            if(flower>=k)
            {
                bouq++;
                flower=0;
            }
        }
            if(bouq>=m)
            {
                return true;
                
            }
        
        return false;
            
            
        }
        
    
    int minDays(vector<int>& bloomDay, int m, int k) {
          if(m*k>bloomDay.size()){
            return -1;
        }
        long long int  low=INT_MIN;
       long long  int high=INT_MAX;
        
        long long int mid,ans=-1;
        
        while(low<=high)
        {
            
            mid=low+(high-low)/2;
            
            if(bloom(bloomDay,mid,m,k))
            {
                ans=mid;
                high=mid-1;
            }
            
            else
            {
                low=mid+1;
            }
        }
        
        return ans;
        
    }
};