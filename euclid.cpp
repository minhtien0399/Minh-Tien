#include <iostream>
#include <math.h>
using namespace std;
int UCLN(int x,int y);
int main()
{
	int x,y;
	char c;
	do
	{
	cout<<"Enter two number: ";
	cin>>x>>y;
	cout<<UCLN(x,y)<<"\n";
	cout<<"Continue? (y/n): ";
	cin>>c;
	}
	while (c !='n');
	return 0;
}
int UCLN(int x,int y)
{
	int r;
	if(x<y)
	{
		r=x;
		x=y;
		y=r;
	}
	if(r=x%y)
	{
		x=y;
		y=r;
		return(UCLN(x,y));
	}
	return y;
	
}

