#include <iostream>

using namespace std;
int main()
{
    int n,t;
    string queue;
    
    cin>>n>>t;
    cin>>queue;
    string ans=queue;
    
    for (int time = 1; time <= t; time++)
    {
        for (int i = 0; i < n; i++)
        {
            if (queue[i]=='B'&&queue[i+1]=='G'&&i+1<n)
            {
                ans[i]=queue[i+1];
                ans[i+1]=queue[i];
            }
            
        }
        queue=ans;
        
        
    }
    cout<<ans<<endl;
    
    
    return 0;
}