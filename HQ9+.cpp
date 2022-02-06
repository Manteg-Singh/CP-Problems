#include <iostream>

using namespace std;
int main()
{
    string a;
    int f=0;
    cin>>a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            cout<<"YES";
            f=1;
            break;
        }
        
    }
    if (!f)
    {
        cout<<"NO";
    }
    
    
    return 0;
}