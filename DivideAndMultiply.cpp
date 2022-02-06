#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> arr;
        int n,x,maxi,maxi_index,sum=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            
            cin>>x;
            arr.push_back(x);
            if (i==0)
            {
                maxi=x;
                maxi_index=0;
            }
            else
            {
                if (x>maxi)
                {
                    maxi=x;
                    maxi_index=i;
                }
                
            }           
        }
        
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2==0&&arr[i]!=maxi)
            {
                while (arr[i]%2!=1&&arr[i]!=0)
                {
                    arr[i]=arr[i]/2;
                    arr[maxi_index]=arr[maxi_index]*2;
                    cout<<arr[i];
                }                
            }
            cout<<" ";
            
        }
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;

        
    }
    return 0;
}