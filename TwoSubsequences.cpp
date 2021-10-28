#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,min_index;
    char min;
   
   string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        min=str[0];
        min_index=0;
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i]<min)
            {
                min=str[i];
                min_index=i;
            }            
        }

        str.erase(min_index,1);
        

        cout<<min<<" "<<str<<endl;
    }
    
    return 0;
}