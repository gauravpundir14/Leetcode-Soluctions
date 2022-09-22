class Solution {
public:        
         // one liner recursive and smarter code
        
         double myPow(double x, int n,double res=1) {
         return n ? myPow(x * x, n / 2, n % 2 ? (n > 0 ? res * x : res / x) : res) : res;
}
};