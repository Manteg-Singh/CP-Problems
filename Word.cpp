#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    int no_upper=0,no_lower=0;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            no_upper++;
        }
        else
        {
            no_lower++;
        }
    }
    if (no_lower>=no_upper )
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i]=tolower(str[i]);
        }
        
        
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<str<<endl;

    
    return 0;
}