class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        int i=-1;
        int a=n;
        while(a>0)
        {
            a=a/3;
            i++;
        }
        cout<<i<<endl;
        if(pow(3,i)==n) return true;
        else return false;
        
    }
};