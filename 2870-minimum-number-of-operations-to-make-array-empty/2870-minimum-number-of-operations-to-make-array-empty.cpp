class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++)
        {
            ump[nums[i]]++;
        }
        int count=0;
        for(auto i:ump)
        {
            if(i.second==1) return -1;
            else if(i.second==2 or i.second==3) count++;
            else if(i.second>3)
            {
               int temp=0;
               int rem=0;
               temp=i.second/3;
               rem=i.second%3;
               count+=temp;
               if(rem!=0) count++; 
            }
        }
        return count;
    }
};