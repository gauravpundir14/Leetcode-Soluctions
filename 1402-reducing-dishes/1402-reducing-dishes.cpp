class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        
        int prefSum = 0, res = 0, n = satisfaction.size();
        for (int i = 0; i < n; i++) {
            prefSum += satisfaction[i];
            if (prefSum < 0) {
                break;
            }
            res += prefSum;
        }
        
        return res;
    }
};