#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b&&a>c)
	    {
	        cout<<"\nAlice";
	    }
	   else if(b>a&&b>c)
	    {
	        cout<<"\nBob";
	    }
	    else
	    {
	        cout<<"\nCharlie";
	    }
	}
	return 0;
}
