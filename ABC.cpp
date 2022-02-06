#include <iostream>

using namespace std;
int main()
{
    long long int t,n;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>n>>s;
        if (s=="1"||s=="0"||s=="01"||s=="10")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}