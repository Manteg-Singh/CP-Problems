#include <iostream>
#include<vector>
using namespace std;
int main()
{

    int n,k;
    int x1=0,x2=0,x3=0,x4=0,ans=0;
    vector<int> s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        s.push_back(k);
        if (k==1)
        {
            x1++;
        }
        else if (k==2)
        {
            x2++;
        }
        else if (k==3)
        {
            x3++;
        }
        else
        {
            x4++;
        }
    }
    
    if (x1<=x3)
    {
        x1=0;
    }
    else
    {
        x1=x1-x3;
    }
    if (x2%2==0)
    {
        x2=x2/2;
        if (x1%4==0)
            {
                x1=x1/4;
            }
            else
            {
                x1=x1/4+1;
            }
    }
    else
    {
        x2=x2/2+1;
        if (x1<=2)
        {
            x1=0;
        }
        else
        {
            x1-=2;
            if (x1%4==0)
            {
                x1=x1/4;
            }
            else
            {
                x1=x1/4+1;
            }
            
        }
        
    }
    cout<<x1+x2+x3+x4;
    

    
    return 0;
}