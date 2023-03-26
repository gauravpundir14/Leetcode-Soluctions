class Solution {
public:
    bool isPowerOfFour(int n) {
    
        if(n==0) return false;
        int i=-1;
        int a=n;
        while(a>0)
        {
            a=a/4;
            i++;
        }
        cout<<i<<endl;
        if(pow(4,i)==n) return true;
        else return false;
        
    }
};
        
    