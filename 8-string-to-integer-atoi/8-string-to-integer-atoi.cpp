class Solution {
public:
    /*  Custom test cases:
        "42"
        "   -42"
        "4193 with words"
        "    --1+192"
        "912834720"
        "+-12"
        "000000 0012-002345"
        "   +0 123"
        "-2147483648"
        "-13+8"
        "123  456"
    */
    int myAtoi(string s) {
        if(s.length() == 0) return 0;
        
        if( (s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z') || s[0] == '.') 
            return 0;
        
        int ans = 0;
        bool isNeg = false; //if two "--" comes together and also helps to multpily by -1
        bool isPos = false; //if tow "++" comes together
        bool isLeadingZero = false;
        
        if(s[0] == '0') isLeadingZero = true;
        
        for(char ch : s) {
            
            if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == '.' ||
                (ch == ' ' && isPos || ch == ' ' && isNeg || ch == ' ' && ans != 0) || 
                (ch == '+' && isPos == true) || 
                (ch == '-' && isNeg) || (ch == '-' && ans != 0) || (ch == '+' && ans != 0))
                break;
            
            if(isLeadingZero == true && ch == '+' || 
               isLeadingZero == true && ch == '-' ||
               isLeadingZero == true && ch == ' ') break;
            
            if(ch == ' ' && ans == 0) continue; //leading spaces
            
            else if(ch == '+' && ans == 0) isPos = true;
            
            else if(ch == '-' && ans == 0) isNeg = true;
        
            else {
                //Exception case: if we multiply our ans by 10 and > interger max value
                if((long) ans * 10 > INT_MAX) {
                    if(isNeg) return INT_MIN;
                    return INT_MAX;
                }
                
                if(ch >= '0' && ch <= '9') {
                    int ele = ch - '0';
                    ans *= 10;
                    
                    if((long)ans + ele > INT_MAX) {
                        if(isNeg) return INT_MIN;
                        return INT_MAX;
                    }
                    
                    ans += ele;
                }
            }
        }
        
        if(isPos == true && isNeg == true) return 0; //"+-12"
        
        if(isNeg) {
            ans *= -1;
        }
        
        return ans;
    }
};