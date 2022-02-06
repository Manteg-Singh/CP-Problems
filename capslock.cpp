#include <iostream>

using namespace std;
int main()
{
    string s;
    cin >> s;
    bool ans = false;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            ans = true;
            break;
        }
    }
    if (ans)
    {
        cout << s;
    }
    else
    {
        if (s[0] >= 97 && s[0] <= 122)
        {
            s[0] -= 32;
        }
        else
        {
            s[0]+=32;
        }
        
        
        for (int i = 1; i < s.length(); i++)
        {

            s[i] += 32;
        }
        cout << s;
    }

return 0;
}