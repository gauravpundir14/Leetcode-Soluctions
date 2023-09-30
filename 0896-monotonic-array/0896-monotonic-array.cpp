class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)
        return true;
        
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        if(nums[0]>nums[1] )
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]<nums[i+1])
                {
                    return false;
                }
            }
        }
        
        else
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i+1]<nums[i])
                {
                    return false;
                }
            }
            
        }
        
        
        return true;
    }
    
    
    
    
    
};