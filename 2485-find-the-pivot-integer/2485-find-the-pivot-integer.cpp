class Solution {
public:
    int pivotInteger(int n) {
        int Sum1 = 0; 
        int Sum2 = 0; 
        
       
        for(int i = 1; i <= n; i++) {
            Sum1 = i * (i + 1) / 2; 
            Sum2= n * (n + 1) / 2 - i * (i - 1) / 2; 
            
           
            if(Sum1 == Sum2)
                return i; 
        }
        
        return -1;
    }
};