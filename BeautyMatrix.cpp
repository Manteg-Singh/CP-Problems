#include <iostream>

using namespace std;
int main()
{
    int matrix[5][5],row_of_1=0,col_of_1=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>matrix[i][j];
            if (matrix[i][j]==1)
            {
                row_of_1=i;
                col_of_1=j;

            }
            
        }        
    }

    cout<<abs(row_of_1-2)+abs(col_of_1-2)<<endl;
    
    
    
    return 0;
}
