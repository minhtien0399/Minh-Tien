#ifndef SACHTINHOC_H
#define SACHTINHOC_H
#include <iostream>
#include <string>
#include "sach.h"
using namespace std;
class Sachtinhoc:public Sach
{
	protected:
		float gianhap;
	public:
		Sachtinhoc():Sach(),gianhap(0.0){}
		Sachtinhoc(string ten, int nxb, float hs, float gn)
		:Sach(ten, nxb, hs), gianhap(gn){}

		//setters
		void setGianhap(float gn)
		{
			this -> gianhap = gn;
		}
		//getters
		float getGianhap()
		{
			return this -> gianhap;
		}
		virtual float tinhGia()
		{
			return this -> gianhap * this -> heso;
		}
		void inra()
		{
			this -> inra();
			cout<<"Gia "<<this -> tinhGia()<<endl;
		}

		friend istream &operator >> (istream &in, Sachtinhoc &sth)
		{
			cout<<"Ten: ";in>>sth.tensach;
			cout<<"NamXB: "; in>>sth.namxuatban;
			cout<<"He so: ";in>>sth.heso;
			cout<<"Gia Nhap: "; in>>sth.gianhap;
			return in;
		}
		~Sachtinhoc(){}
};
#endif
