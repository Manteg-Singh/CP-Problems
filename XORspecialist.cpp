#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> list(n);
        for (int i = 0; i < n; i++)
        {
            cin >> list[i];
        }
        if (n == 1)
        {
            cout << "NO\n";
        }

        else if (n % 2 == 0)
        {
            cout << "YES\n";
        }
        else if (n % 2 == 1)
        {
            bool chk = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (list[i + 1] <= list[i])
                {
                    chk = true;
                    break;
                }
            }
            if (chk)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}