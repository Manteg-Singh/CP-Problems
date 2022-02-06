#include <iostream>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string keyboard, s;
        int flag = 0, first, secnd, sum = 0;
        cin >> keyboard >> s;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < keyboard.length(); j++)
            {
                if (i == 0 && s[i] == keyboard[j])
                {
                    first = j;
                }
                else if (s[i] == keyboard[j])
                {
                    secnd = j;
                }
            }
            if (i != 0)
            {
                sum = sum + abs(secnd - first);
                first = secnd;
            }
        }
        cout << sum << endl;
    }
        return 0;
    }