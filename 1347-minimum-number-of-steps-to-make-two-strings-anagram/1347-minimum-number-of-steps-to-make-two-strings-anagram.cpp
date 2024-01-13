class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>count1(26,0);
        vector<int>count2(26,0);
        for(auto i:s)
        {
            count1[i-'a']++;
        }
        for(auto i:t)
        {
            count2[i-'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans =ans+ abs(count1[i] - count2[i]);
        }

        return ans/ 2;
        
    }
};