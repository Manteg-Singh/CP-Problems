#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        arr.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}