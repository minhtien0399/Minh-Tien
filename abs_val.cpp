#include <iostream>
#include <math.h>
using namespace std;
double abs_val(double n);
int main()
{
	cout<<"Enter number: ";
	int n;
	cin>>n;
	cout<<"Abs of nymber is: "<<abs_val(n)<<"\n";
	return 0;
}
double abs_val(double n)
{
	if (n < 0 )
		return (n*(-1));
	else
		return (n);
}
