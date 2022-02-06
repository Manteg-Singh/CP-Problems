#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        int power=0;
        sort(s.begin(),s.end());
        for (int i = 0; i < s.length(); i++)
        {
            power+=(s[i]-96)*(i+1);
        }
        cout<<power<<endl;
        
    }
    
    return 0;
}