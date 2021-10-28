#include <iostream>
#include<cctype>

using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if ( towlower(s1[i])>towlower(s2[i]) )
        {
            cout<<1;
            break;
        }
        else if(towlower(s1[i])<towlower(s2[i]))
        {
            cout<<-1;
            break;
        }
        else
        {
            if (i==s1.size()-1)
            {
                cout<<0;
                break;
            }
            
            continue;
        }
        
        
    }
    
    return 0;
}