#include <iostream>

using namespace std;
int main()
{
    string s;
    long long int sum1 = 0, sum2 = 0;
    cin >> s;
    int x = 0;
    int y = s.size() - 1;
    while (x <= y)
    {
        if (s[x] != s[y])
        {
            x++;
            sum1++;
            
        }
        else
        {
            
            x++;
            y--;
        }
 

    }
    x = 0;
    y = s.length() - 1;
    while (x <= y)
    {
        if (s[x] == s[y])
        {
            x++;
           

            y--;
        }
        else
        {
            y--;
            sum2++;
          
        }
    }
   
   
    cout << min(sum1, sum2) << endl;

    return 0;
}