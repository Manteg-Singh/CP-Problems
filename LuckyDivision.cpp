#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    bool ans=false;
    
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int flag=0;
        string num=to_string(i);
        for (int j = 0; j < num.length(); j++)
        {
            if (num[j]=='4'||num[j]=='7')
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
            
        }
        if (flag==0)
        {
            if (n%i==0)
            {
                ans=true;
                break;
            }      
        }
        
        
        
    }
    if (ans==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;
}