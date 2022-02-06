#include <iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long long int arr[n],sorted[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sorted[i]=arr[i];

        }
        sort(sorted,sorted+n);
        int sum=0;
        multiset<int>temp,from_sorted;
        for (int i = 0; i < n; i++)
        {
            temp.insert(arr[i]);
            from_sorted.insert(sorted[i]);
            if (temp==from_sorted)
            {
                sum+=(*temp.rbegin()-*temp.begin());
                temp.clear();
                from_sorted.clear();
            }
            
        }
        cout<<sum<<endl;
        

        
    }
    
    return 0;
}