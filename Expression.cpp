#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a!=1&&b!=1&&c!=1)
    {
        cout<<a*b*c;

    }
    else
    {
        if (a==1&&b==1&&c==1)
        {
            cout<<3;
        }
        else if ((a==1&&b==1))
        {
            cout<<c*2;
        }
        else if (b==1&&c==1)
        {
            cout<<a*2;
        }
        else if (a==1&&c==1)
        {
            cout<<a+b+c;
        }
        else if (a==1)
        {
            cout<<(b+1)*c;
        }
        else if (c==1)
        {
            cout<<(b+1)*a;
        }
        else
        {
            if (a<=c)
            {
                a++;
                cout<<a*c;
            }
            else
            {
                c++;
                cout<<a*c;
            }
            
        }
        
        
    }
    
    return 0;
}