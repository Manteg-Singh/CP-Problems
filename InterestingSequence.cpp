#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        int ans=0;
        while (k%2==0)
        {
            ans++;
            k=k/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}