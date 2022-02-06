#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    vector<int> arr;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!='+')
        {
            arr.push_back(s[i]-'0');
        }
        
    }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (i==arr.size()-1)
        {
            cout<<arr[i]<<endl;
        }
        else
        {
            cout<<arr[i]<<"+";
        }
        
        
    }
    

    
   
    
    return 0;
}