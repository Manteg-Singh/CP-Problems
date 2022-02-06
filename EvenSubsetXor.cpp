#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<long long> TEMPO;
    for (int i = 0; i < 17; i++)
    {
        for (int j = i + 1; j < 18; j++)
        {
            for (int k = j + 1; k < 19; k++)
            {
                for (int l = k + 1; l < 20; l++)
                {
                    long long val = (1 << l) + (1 << k) + (1 << j) + (1 << i);
                    TEMPO.push_back(val);
                }
                if (TEMPO.size() == 1000)
                {
                    break;
                }
            }
            if (TEMPO.size() == 1000)
            {
                break;
            }
        }
        if (TEMPO.size() == 1000)
        {
            break;
        }
    }

    int xt = 0, bb = 1;
    cin >> bb;
    while (xt++ < bb)
    {

        long long n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << TEMPO[i] << " ";
        }
        cout << endl;
    }

    return 0;
}