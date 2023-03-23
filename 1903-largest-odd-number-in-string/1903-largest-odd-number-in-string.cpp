class Solution {
public:
    string largestOddNumber(string num) {
        int j = num.size()-1;
        while(j>=0){
            if((num[j]-'0')%2)
                return num;
            num.erase(j);
            j--;
        }
        return num;
    }
};