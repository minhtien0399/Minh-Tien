//
#include <iostream>
#include <math.h>
using namespace std;
int DaysInMonth(int m,int y);
int main()
{
	int m,y;
	char a;
	do
	{
	cout<<"Enter month and year: ";
	cin>>m,y;
	cout<<DaysInMonth(m,y)<<"\n";
	cout<<"Continue? (y/n): ";
	cin>>a;
	}
	while (a!='n');
	return 0;
}
int DaysInMonth(int m,int y)
{
	switch (m)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			return (31);
		case 4:case 6:case 9:case 11:
			return (30);
		case 2:
		{
			if ((y%4 == 0)&&(y%100!=0) || (y%400 ==0))
				return (29);
			else
				return (28);
		}
	}
}
