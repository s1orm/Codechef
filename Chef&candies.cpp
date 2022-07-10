#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x;
	    cin>>n>>x;
	    if(n<x)
	    {
	        cout<<"\n0";
	    }
	    else
	    {   
	        int r;
	        if((n-x)%4!=0)
	        {
	            r=1;
	        }
	        else
	        {r=0;}
	        cout<<"\n"<<(n-x)/4+ r;
	    }
	   
	}
	return 0;
}
