#include <iostream>

using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int ab=0,ba=0,j=0,k=0;
        int flag=-1,n=s.size();
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]=='a'&&s[i+1]=='b')
            {
                ab++;
            }
            else if (s[i]=='b'&&s[i+1]=='a')
            {
                ba++;
            }       
        }
    
        if (ab==ba)
        {
            cout<<s<<endl;
        }

        else if (ab>ba)
        {
            if (s[0]=='a')
            {
                s[0]='b';
            }
            
            cout<<s<<endl;
            
        }

        else
        {
            if (s[n-1]=='a')
            {
               s[n-1]='b';
            }
            
            


            cout<<s<<endl;
        }
        

    }

    return 0;
}