#include <iostream>

bool prefSum(int* a, int* b, int n)
{
    int s1=0,s2=0;
    for (int i = 0; i < n-1; i++)
    {
        s1=s1+a[i];
        s2=s2+b[i];
        if (s1==s2)
        {
           return false;
        }
        
    }
    return true;
}
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int* A;
        int* B;
        int start=0,reverse=n;
        A=new int[n/2];
        B=new int[n/2];
        for (int i = 0; i < n/2; i++)
        {
            A[i]=start;
            A[]
        }
        if ((n/2)%2==0)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < n/2; i++)
            {
                A[i]=
            }
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}