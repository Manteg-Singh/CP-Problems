#include <iostream>

using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        if((a+2*b+3*c)%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        
    }
    
    return 0;
}