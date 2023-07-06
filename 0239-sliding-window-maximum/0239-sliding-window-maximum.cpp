class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores the indexes
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()==i-k) dq.pop_front(); //remove the first element as the capacity becomes more than k 
            while(!dq.empty() && nums[dq.back()]<nums[i]) dq.pop_back(); // remove the smaller elements as they are of no use 
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]); // as the dequeue is storing decreasing numbers the first one will be the highest
        }
        return ans;
    }
};