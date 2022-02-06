#include <iostream>
#include <vector>

using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
    long long int w,h,k,mini,maxi,x,side1=0,side2=0;
        vector<int> side;
        cin>>w>>h;
        for (int i = 0; i < 4; i++)
        {
            cin>>k;
            for (int j = 0; j < k; j++)
            {
                cin>>x;
                if (j==0)
                {
                    mini=x;
                }
                else if (j==k-1)
                {
                    maxi=x;
                }               
            }
            if (i<=1)
            {
                side1=max(side1,(maxi-mini));
            }
            else
            {
                side2=max(side2,(maxi-mini));
            }          
        }
        cout<<max(side1*h,side2*w)<<endl;
        
    }
    
    return 0;
}