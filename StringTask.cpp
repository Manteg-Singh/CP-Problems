#include <iostream>
#include <cctype>
using namespace std;
bool vowel(char ch)
{
    if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'||ch=='Y'||ch=='y')
    {
        return true;
    }
    return false;
    
}
int main()
{
    string s;
    cin>>s;
    for (int  i = 0; i < s.size(); i++)
    {
        if (vowel(s[i]))
        {
           continue;
        }
        else
        {
            if (s[i]>='B'&&s[i]<='Z')
            {
                char ch=towlower(s[i]);

                cout<<'.'<<ch;
            }
            else
            {
                cout<<'.'<<s[i];
            }
            
            
        }
        
        
    }
    


    return 0;
}