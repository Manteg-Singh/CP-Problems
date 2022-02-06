#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        int x;
        vector<int> a;
        vector<int>b;
        for (int i = 0; i < n; i++)
        {
            
            cin>>x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (k>=a[j])
                {
                    k+=b[j];
                    a.erase(a.begin()+j);
                    b.erase(b.begin()+j);
                }

                
            }
            
        }
        cout<<k<<endl;
        
    }
    
    return 0;
}