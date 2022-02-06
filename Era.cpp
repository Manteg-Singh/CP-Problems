#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int z=0,ans=0;
        cin>>n;
        vector<int> a(n+1);
        a[0]=0;
        vector<int>diff(n+1);
        diff[0]=0;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            diff[i]=a[i]-i;

        }
        
        for (int i = 1; i <= n; i++)
        {
            if (diff[i]>0)
            {
                z=diff[i];

                ans+=z;

                for (int j = i; j <=n; j++)
                {
                    diff[j]-=z;
                }
                
            }
            
        }
        cout<<ans<<endl;
        

        
    }
    
    return 0;
}