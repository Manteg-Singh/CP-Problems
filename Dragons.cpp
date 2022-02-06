#include <bits/stdc++.h>

using namespace std;
int main()
{
    int s,n,x,y;
    bool flag=false;

    cin>>s>>n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        arr[i]=make_pair(x,y);
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        if (s>arr[i].first)
        {
            s+=arr[i].second;
        }
        else
        {
            cout<<"NO"<<endl;
            flag=true;
            break;
        }
    }
    if (!flag)
    {
        cout<<"YES"<<endl;
    }
    
    
    return 0;
}