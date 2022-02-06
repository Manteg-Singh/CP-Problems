#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    int diff=2* max(arr[0],l-arr[n-1]);
    for (int i = 0; i < n-1; i++)
    {
        diff=max(diff,arr[i+1]-arr[i]);
    }
 
    cout<<fixed<<setprecision(9)<<(double)diff/2<<endl;
    

    return 0;
}