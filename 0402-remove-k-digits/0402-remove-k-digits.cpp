class Solution {
public:
    string removeKdigits(string num, int k) {
         if(num.length() <= k)   
            return "0";
        
        // k is 0 , no need of removing /  preforming any operation
        if(k == 0)
            return num;
        
        string res = "";// result string
        stack <char> s; // char stack
        
        s.push(num[0]);
        for(int i=1;i<num.size();i++)
        {
            while(k>0 and !s.empty() and s.top()>num[i])
            {
                k--;
                s.pop();
            }
           
            s.push(num[i]);
           
            if(s.size() == 1 && num[i] == '0')
                s.pop();
        }
        
        while (k and !s.empty())
        {
            s.pop();
            k--;
        }
          while(!s.empty())
        {
            res.push_back(s.top()); // pushing stack top to string
            s.pop(); // pop the top element
        }
        
        reverse(res.begin(),res.end()); // reverse the string 
        
        if(res.length() == 0)
            return "0";
        
        return res;
        
        
    }
};