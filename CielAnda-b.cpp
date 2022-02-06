#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    int ans=a-b;
    if (ans%10<9)
    {
        ans++;
    }
    else
    {
        ans--;

    }
    cout<<ans;
    
    
    cout<<ans;


    return 0;
}