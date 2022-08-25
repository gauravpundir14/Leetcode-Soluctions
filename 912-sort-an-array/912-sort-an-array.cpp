class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector <int> n;
        int x;
        priority_queue<int , vector<int>,greater <int> >pq;
        for(auto i:nums)
        {
            pq.push(i);
        }
        while(pq.size())
        {
        
           
            n.push_back(pq.top());
                          pq.pop();
        }
        return n;
    }
};