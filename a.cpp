#include <iostream>
#include<vector>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0,sum=0;
        for(int i=0;i<accounts.size();i++)
        {
			sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
                
            }
            ans=max(ans,sum);
        }
        return ans;
    }
int main()
{
	vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
	cout<<maximumWealth(accounts)<<" * ";

	
	return 0;
}