//
#include <iostream>
#include <math.h>
using namespace std;
int LeapYear(int n);
int main()
{
	int n;
	char a;
	do
	{
		cout<<"Enter a year: ";
		cin>>n;
		
		if (LeapYear(n))
		{
			cout<<n<<" is leap year\n";

		}
		else 
		{
			cout<<n<<" is not leap year\n";

		}
		
		cout<<"Continue? (y/n): ";
		cin>>a;
	}
	while (a != 'n');
	return 0;
}
int LeapYear(int n)
{
	return ((n%4 == 0)&&(n%100!=0) || (n%400 ==0));
}
