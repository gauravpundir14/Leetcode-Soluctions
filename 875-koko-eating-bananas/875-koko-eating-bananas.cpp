class Solution {
public:
    
    
    bool koko(vector<int>& piles,int h, int mid)
    {   long long  time=0;
        for(int i =0;i<piles.size();i++)
    {
      time+=ceil((double)piles[i]/mid);
    }
     
     if(time<=h)return true;
     else 
         return false;
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max1=0;
        for(int i =0;i<piles.size();i++)
        {
            max1=max(max1,piles[i]);
        }
        
        
        int s=1,g;
        int mid=0;
    if(h==piles.size())
    {
        return max1;
    }
        
        int e=max1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(koko(piles,h,mid)==true)
            {     g=mid;
                e=mid-1;
                
            }
            
            else 
            {
                s=mid+1;
            }
        }
        
        return g;
        
    }
};