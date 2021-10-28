#include <iostream>
#include <string>

using namespace std;
int main()
{
    int z;
    string k;
    int cnt=0;
    cin>>z;
    z++;
    while (true)
    {
        cnt=0;
        k=to_string(z);

        for (int i = 0; i < 4; i++)
        {
            for (int j = i+1; j < 4; j++)
            {
                if (k[i]!=k[j])
                {
                    cnt++;
                }
                
            }
            
        }
        if (cnt==6)
        {
            cout<<z;
            break;
        }
        else
        {
            z++;
            k=to_string(z);
        }
        
    }
    
    return 0;
}