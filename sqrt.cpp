//
#include <iostream>
#include <math.h>
using namespace std;
double SQRT(double n);
int main()
{
	int n;
	char a;
	do
	{
		cout<<"Enter a valuer: ";
		cin>>n;
		cout<<"Square root of "<<n<<" is: "<< SQRT(n)<<"\n";
		cout<<"Continue? (y/n): ";
		cin>>a;
	}
	while (a != 'n');
	return 0;
}
double SQRT(double n)
{
	return sqrt(n);
}
