class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size()-1;
        while(start <= end){
           
            char startChar =tolower(s[start]);
            char lastChar = tolower(s[end]);

           
            if(!isalnum(int(startChar))){
                start++;
                continue;
            }
            if(!isalnum(int(lastChar))){
                end--;
                continue;
            }

       
            if(startChar==lastChar){
                start++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
};