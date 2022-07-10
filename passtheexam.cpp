#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<10||b<10||c<10)
	    {
	        cout<<"\n FAIL";
	        continue;
	    }
	    if(a+b+c<100)
	    {
	        cout<<"\n FAIL";
	        continue;
	    }
	    cout<<"\n PASS";
	}
	return 0;
}
