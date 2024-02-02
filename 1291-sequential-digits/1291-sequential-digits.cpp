class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string str="123456789";
        vector<int>ans;
        
        for(int i=0;i<str.size();i++)
        {   string temp="";
            for(int j=i;j<str.size();j++)
            {
                temp+=str[j];
                int num=stoi(temp);
                if(num>=low and num<=high)
                {
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
