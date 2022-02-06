#include <iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t,k;
    cin>>t;
    while (t--)
    {
        vector<int>arr;
        
        int n,maxi,value,mid;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>k;
            arr.push_back(k);
        }
        for (int i = 0; i < n; i++)
        {
            long long int x;
            if (i>0&&i<n-1)
            {
                x=max((arr[i]&arr[i+1]),(arr[i]&arr[i-1]));
            }
            else if (i==0)
            {
                x=arr[i]&arr[i+1];
            }
            else
            {
                x=arr[i]&arr[i-1];
            }
            cout<<x<<" ";
            
        }
        cout<<"\n";
    }
    return 0;
}

