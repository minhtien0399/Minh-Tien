#include <iostream>
#include <string>
#include "sach.h"
#include "sachtinhoc.h"
#include "sachkinhte.h"
using namespace std;
#define MAX 6
int main(int argc, char const *argv[])
{
	//version THONG THAI (DUNG)
	Sach *book[MAX];
	for (int i = 0; i < MAX; ++i)
	{
		if(i % 2 != 0)
		{
			cout<<"Sach Kinh Te "<<i<<endl;
			Sachkinhte *a = new Sachkinhte();
			cin>>*a;
			book[i] = a;
		}
		else
		{
			cout<<"Sach Tinh Hoc "<<i<<endl;
			Sachtinhoc *a = new Sachtinhoc();
			cin>>*a;
			book[i] = a;
		}
	}

	cout<<"DONE";
	for (int i = 0; i <MAX; ++i)
	{
		book[i] -> inra();
	}
	return 0;
}
