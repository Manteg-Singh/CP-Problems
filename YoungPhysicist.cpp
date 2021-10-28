#include <iostream>

using namespace std;
int main()
{
    int n,si=0,sj=0,sz=0,a,b,c;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        si+=a;
        sj+=b;
        sz+=c;
    }
    if (si==0&&sj==0&&sz==0)
    {
        cout<<"YES";
    }
    else
    {cout<<"NO";}
    

    return 0;
}