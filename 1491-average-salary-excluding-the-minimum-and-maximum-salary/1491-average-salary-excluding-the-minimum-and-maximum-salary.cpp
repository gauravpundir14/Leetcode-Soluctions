class Solution {
public:
    double average(vector<int>& salary) {
        int maxi=0;
        int mini=salary[0];
        int sum=0;
        for(int i=0;i<salary.size();i++)
        {
            maxi=max(maxi,salary[i]);
            mini=min(mini,salary[i]);
            sum+=salary[i];
        }
        cout<<mini<<maxi;
        sum=sum-(mini+maxi);
        cout<<sum;
          return (1.0*sum)/(1.0*(salary.size()-2));
    }
     
};