//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    int cal(int arr[],vector<int >&dp, int n)
    {
        if(n==0) return arr[n];
        if(n<0) return 0;
        
        if(dp[n]!=-1) return dp[n];
        int pick=arr[n]+cal(arr,dp,n-2);
        int nonpick=cal(arr,dp,n-1);
        
        return dp[n]= max(pick,nonpick);
        
        
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {   int ans;
        // Your code here
        
        vector<int >dp(n+1,-1);
       ans=cal(arr,dp,n-1);
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends