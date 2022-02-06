#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    string n;
    while (t--)
    {
        cin>>n;
        long long int len=n.length();
        long long int ans=len;
        for (long long int i = 0; i < len; i++)
        {
            for (long long int  j = i+1; j < len; j++)
            {
                int value=(n[i]-'0')*10+(n[j]-'0');
                if (value%25==0)
                {
                    ans=min(ans,(j-i-1)+(len-1-j));
                }
                


            }            
        }
        cout<<ans<<endl;
        

    }
    
    return 0;
}