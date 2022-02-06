#include <iostream>

using namespace std;
int main()
{
    long long int t, l, r, k;
    cin>>t;
    while (t--)
    {
        long long int odd = 0;
        cin >> l >> r >> k;
        if (l == r && l > 1)
        {
            cout << "YES" << endl;
        }
        else if (l == r && l == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (l % 2 == 1)
            {
                odd = (r-l) / 2 +1;
            }
            else
            {
                if (r % 2 == 0)
                {
                    odd = (r - l) / 2;
                }
                else
                {
                    odd = (r - l) / 2 + 1;
                }
            }
            if (k >= odd)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}