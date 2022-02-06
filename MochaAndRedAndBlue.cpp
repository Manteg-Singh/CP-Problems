#include <iostream>
using namespace std;
void result(int end,char c,char cn,string & str)
{
    for (int i = 0; i < end; i++)
    {
        if (i%2==0)
        {
            str[i]=c;
        }
        else
        {
            str[i]=cn;
        }
        
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >>n>>s;
        bool chk=false;
        int ind=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='B'||s[i]=='R')
            {
                chk=true;
                ind=i;
                break;
            }
            
        }
        if (!chk)
        {
            result(n,'B','R',s);
            cout<<s<<endl;           
        }
        else
        {
            if (s[ind]=='B')
            {
                if (ind%2==0)
                {
                    result(ind,'B','R',s);
                }
                else
                {
                    result(ind,'R','B',s);
                }
                
            }
            else
            {
                if (ind%2==0)
                {
                    result(ind,'R','B',s);
                }
                else
                {
                    result(ind,'B','R',s);
                }
            
            }
            for (int i = ind+1; i < n; i++)
            {
                if (s[i]=='?')
                {
                    if(s[i-1]=='R')
                    {
                        s[i]='B';
                        
                    }
                    if (s[i-1]=='B')
                    {
                        s[i]='R';
                    }
                    
                    
                }
                
            }
            cout<<s<<endl;
            



        }
        
        
        








        // if (s == "?")
        // {
        //     cout << "B" << endl;
        // }
        // else if (s == "B" || s == "R")
        // {
        //     cout << s << endl;
        // }
        // else
        // {

        //     if (s[0]=='?')
        //     {
        //         if (s[1]=='B')
        //         {
        //             s[0]='R';
        //         }
        //         else if(s[1]=='R'||s[1]=='?')
        //         {
        //             s[0]='B';
        //         }                
        //     }
        //     if (s[n-1]=='?')
        //     {
        //         if (s[n-2]=='B')
        //         {
        //             s[n-1]='R';
        //         }
        //         else if (s[n-2]=='R'||s[n-2]=='?')
        //         {
        //             s[n-1]='B';
        //         }
                
        //     }            
        //     for (int i = 1; i < s.length() - 1; i++)
        //     {
        //         if (s[i]=='?')
        //         {
        //             if (s[i-1]=='B'&&s[i+1]=='B')
        //             {
        //                 s[i]='R';
        //             }
        //             else if (s[i-1]=='R'&&s[i+1]=='R')
        //             {
        //                 s[i]='B';
        //             }
        //             else if (s[i-1]=='B'&&s[i+1]=='?')
        //             {
        //                 s[i]='R';
        //             }
        //             else if (s[i-1]=='R'&&s[i+1]=='?')
        //             {
        //                 s[i]='B';
        //             }
        //             else if (s[i-1]=='B'&&s[i+1]=='R')
        //             {
        //                 s[i]='B';
        //             }
        //             else if (s[i-1]=='R'&&s[i+1]=='B')
        //             {
        //                 s[i]='B';
        //             }
                    
        //         }
                
        //     }
        //     cout<<s<<endl;
        // }
        
    }

    return 0;
}