#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        vector<long long int> a;
        int no_of_odds=0,no_of_even=0;
        long long int k;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>k;
            if (k%2==0)
            {
                no_of_even++;
            }
            else
            {
                no_of_odds++;
            }
            
            // a.push_back(k);
        }
        if (n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            if (no_of_odds%2==0)
            {
                cout<<no_of_odds/2<<endl;
            }
            else
            {
                cout<<(no_of_odds-1)/2<<endl;
            }
            
            
        }
        
        
        


    }
    

    return 0;
}