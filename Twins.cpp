#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    
    int n,k,sum=0,value,sov=0;
    vector <int> arr;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        sum+=k;
        arr.push_back(k);

    }
    sort(arr.begin(),arr.end());
    k=1;
    int j=n-2;
    value=arr[n-1];
    sum-=value;
    sov=value;
    while (sov<=sum)
    {
        value=arr[j];
        sov+=value;
        sum-=value;
        k++;
        j--;

    }
    
    cout<<k;

    return 0;
}