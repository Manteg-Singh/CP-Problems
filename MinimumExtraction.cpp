#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t,n,k,max_of_min,sum_of_prev=0;
    vector<int> arr;
    cin>>t;
    while (t--)
    {

        cin>>n;
        for (int  i = 0; i < n; i++)
        {
            cin>>k;
            arr.push_back(k);
        }
        sort(arr.begin(),arr.end());
        sum_of_prev=arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            arr[i]=arr[i]- sum_of_prev;
            sum_of_prev+=arr[i];


        }
        
        
        cout<<*max_element(arr.begin(), arr.end())<<endl;
        arr.clear();


        
    }
    
    return 0;
}