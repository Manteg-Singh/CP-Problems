#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str,ans;
    cin>>str;
    int i=0;

    while (i<str.length())
    {
        if (str[i]=='.')
        {
            ans.append("0");
            i++;
        }
        else if (str[i]=='-'&&(i+1)<str.length())
        {
            if (str[i+1]=='-')
            {
                ans.append("2");
            }
            else if (str[i+1]=='.')
            {
                ans.append("1");
                
            }
            i+=2;
            
        }
              
    }
    cout<<ans;

    return 0;
}