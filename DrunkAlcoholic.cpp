#include <iostream>

using namespace std;
int main()
{
    int t,k,odd,even;
    cin>>t;
    while (t--)
    {
        cin>>k;
        even=k/2;
        odd=k-even;
        cout<<odd*3 -even<<endl;
    }
    
    return 0;
}