#include <iostream>
#include<string.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,k;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>n>>k>>s;
        string ans="";
        ans=s.substr(k,n-1);
        long long int x=0,y=k-1,lim;
        if(k==1)
        {
            cout<<s<<endl;
        }
        else
        {
            while(y>x)
            {
            ans=s[x]+ans;
            ans=s[y]+ans;
            x++;
            y--;
            }
            
        
            if(k%2==1)
            {
              ans=s[k/2]+ans;
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}