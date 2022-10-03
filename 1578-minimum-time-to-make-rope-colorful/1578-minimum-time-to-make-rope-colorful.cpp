class Solution {
public:
    int minCost(string s, vector<int>& v) {      
        int ans=  0 ,n = s.size(), i = 0;
        while(i < n){
            int j = i+1;
            int sum = v[i] , mx = v[i];
            while(j< n && s[j] == s[i]){
                sum += v[j];
                mx = max(mx , v[j++]);
            }
            ans += sum - mx;
            i = j;
        }
        return ans;
    }
};