#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    char s='0';
	    for(int i=0; i<n;i++)
	    {            
	        cout<<s;
	        if(i%26==0)
	        {
                s=96;
            }
            s+=1;
	    }
	    cout<<endl;
	}
	return 0;
}
