//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    unordered_set<char> sp;
    int maxLength=0;
    int left=0;
    for(int i=0;i<s.size();i++)
    {
        if(sp.count(s[i])==0)
        {
            sp.insert(s[i]);
             maxLength = max(maxLength, i- left + 1);
        }
        else
        {
            while(sp.count(s[i]))
            {
                sp.erase(s[left]);
                left++;
            }
            sp.insert(s[i]);
        }
        
    }
        return maxLength;
}
