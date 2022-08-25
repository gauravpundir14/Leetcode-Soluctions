class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x,y;
     priority_queue< int >pq;
        for(auto i: stones)
        {
        pq.push(i); 
        }
        
        while(pq.size()>1)
        {
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            
            if(x==y)
                continue;
            else 
                pq.push(x-y);
        }
        
        if(pq.size()==0) return 0;
       else  return pq.top();
    }
};