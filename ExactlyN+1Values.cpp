#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    short int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        // long long int* ans;
        long long int sumAll=pow(2,n),x;
        // ans= new long long int[n+1];
        if (n==1)
        {
            cout<<"1 1"<<endl;
        }
        else
        {
            for (int i = 0; i < n-1; i++)
            {
                cout<<i+1<<" ";
            }
            cout<<n-1<<" ";
            x=(n*(n-1))/2 + (n-1);
            cout<<sumAll - x<<endl;
            
            
            
        }
        


    }
    
    return 0;
}