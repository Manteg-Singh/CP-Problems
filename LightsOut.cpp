#include <iostream>

using namespace std;
int main()
{
    int matrix[3][3],ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix[i][j];
            ans[i][j]=0;
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j]%2==1)
            {
                ans[i][j]++;
                if (i+1<3)
                {
                    ans[i+1][j]++;
                }
                if (i-1>=0)
                {
                    ans[i-1][j]++;
                }
                if (j+1<3)
                {
                    ans[i][j+1]++;
                }
                if (j-1>=0)
                {
                    ans[i][j-1]++;
                }
            }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ans[i][j]%2==1)
            {
                ans[i][j]=0;
            }
            else
            {
                ans[i][j]=1;
            }           
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}