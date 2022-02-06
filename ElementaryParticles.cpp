#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int ans=-1;
        bool chk=false;
        int k;
        cin>>n;
        unordered_map<int,vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            cin>>k;
            m[k].push_back(i);
            if (m[k].size()>1)
            {
                chk=true;
            }
            
        }
        if (!chk)
        {
            cout<<-1<<endl;
        }
        else
        {
            int left_bound=0,right_bound=0;
            for (auto &it : m)
            {
                for (int i = 0; i < it.second.size()-1; i++)
                {
                    left_bound=min(it.second[i],it.second[i+1]);
                    right_bound=min(n-1-it.second[i],n-1-it.second[i+1]);
                    ans=max(ans,left_bound+right_bound+1);
                }
                
            }
            cout<<ans<<endl;

            
        }
        
        
    }
    
    return 0;
}