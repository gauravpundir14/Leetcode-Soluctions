class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size() - 1;
        int left = 0;
        while (left < right){
            if(numbers[right] + numbers[left] == target){
                return {left + 1,right + 1};
            }
            else if(numbers[right] + numbers[left] < target){
                left++;
            }
            else{
                right--;
            }
        }
        return {-1,-1};
    }
};
