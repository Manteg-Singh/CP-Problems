#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int sum=0;
        for (int i = 0; i < n-1; i++)
        {
            sum+=arr[i];
        }
        double a1= (double)sum/(n-1);
        double ans= a1+arr[n-1];
        cout<<fixed<<setprecision(6)<<(double)ans<<endl;
        
    }
    
    return 0;
}