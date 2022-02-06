#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t, n;
    cin >> t;
    while (t--)
    {
        long long int cnt5 = 0;
        long long int x1;
        cin >> n;
        long long int x=1;
        for (long long int i = 5; i <= n; i =pow(5,x) )
        {
            cnt5=cnt5+n/i;
            
           x++;
        }
        cout<<cnt5<<endl;
        
    }

    return 0;
}