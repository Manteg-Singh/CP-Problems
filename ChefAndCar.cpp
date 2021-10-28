#include <iostream>
using namespace std;

int main()
{
    int t;
    long long n, v, j, cof, chkpt, petrol;
    cin >> t;
    while (t--)
    {
        cof = 0, chkpt = 1;
        cin >> n >> v;
        j = n - 1;
        if (v >= j)
        {
            cof = j;
            cout << ((n * (n - 1)) / 2) << " ";
            cout << cof << endl;
        }
        else if (v < j)
        {
            cout << ((n * (n - 1)) / 2) << " " << v + ((n - v) * (n - v + 1)) / 2 - 1<<endl;
        }
    }
    return 0;
}
