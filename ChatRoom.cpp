#include <iostream>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    string s, ans="hello";
    int j=0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==ans[j])
        {
            j++;
        }
        
    }
    if (j==5)
    {
       cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

    return 0;
}