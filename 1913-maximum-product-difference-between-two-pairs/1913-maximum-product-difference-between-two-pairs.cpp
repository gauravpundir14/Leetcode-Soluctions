class Solution {
public:
    int maxProductDifference(vector<int>& num) {
        int n=num.size();
        sort(num.begin(),num.end());
        int a=num[0];
        int b=num[1];
        int c=num[n-1];
        int d=num[n-2];
        int ans=(c*d)-(a*b);
        return ans;
        
    }
};