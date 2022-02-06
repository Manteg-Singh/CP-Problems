#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long long int arr[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<abs(arr[(n-1)/2]-arr[((n-1)/2)-1])<<endl;
    }
    
    return 0;
}