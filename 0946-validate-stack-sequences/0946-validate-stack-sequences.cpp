class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j=0;
        for(int i=0;i<pushed.size();i++)
        {  st.push(pushed[i]);
         
        while(st.size() > 0 && st.top() == popped[j]){ 
                st.pop(); 
                j++; 
        }
        }
        if(st.empty()) return true;
        else return false;
    }
};