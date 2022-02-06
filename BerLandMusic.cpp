#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        map<int,int> val_and_indices;
        vector<int> p(n);
        vector<int> Zeroes,Ones;
        for (int i = 0; i < n; i++)
        {
            cin>>p[i];
            val_and_indices[p[i]]=i;

        }
        string str;
        cin>>str;
        for (int i = 0; i < n; i++)
        {
            if (str[i]=='0')
            {
                Zeroes.push_back(p[i]);
            }
            else
            {
                Ones.push_back(p[i]);
            }
            
        }
        sort(Ones.begin(),Ones.end());
        sort(Zeroes.begin(),Zeroes.end());
        int num=1;
        for (int i = 0; i < Zeroes.size(); i++)
        {
            p[val_and_indices[Zeroes[i]]]=num;
            num++;
        }
        for (int i = 0; i < Ones.size(); i++)
        {
            p[val_and_indices[Ones[i]]]=num;

            num++;
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
        
        

    }
    
    return 0;
}