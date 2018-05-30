#ifndef SACHKINHTE_H
#define SACHKINHTE_H
#include <iostream>
#include <string>
#include "sach.h"
using namespace std;
class Sachkinhte:public Sach
{
	protected:
		float gianhap;
		float chietkhau;
	public:
		Sachkinhte():Sach(),gianhap(0.0){}
		Sachkinhte(string ten, int nxb, float hs, float gn, float ck)
		:Sach(ten, nxb, hs), gianhap(gn), chietkhau(ck){}

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
		float getChietkhau()
		{
			return this -> chietkhau;
		}
		virtual float tinhGia()
		{
			return this -> gianhap * this -> heso - this -> chietkhau;
		}
		void inra()
		{
			this -> inra();
			cout<<"Gia "<<this -> tinhGia()<<endl;
		}

		friend istream &operator >> (istream &in, Sachkinhte &skt)
		{
			cout<<"Ten: ";in>>skt.tensach;
			cout<<"NamXB: "; in>>skt.namxuatban;
			cout<<"He so: ";in>>skt.heso;
			cout<<"Gia Nhap: "; in>>skt.gianhap;
			cout<<"Chiet Khau: "; in>>skt.chietkhau;
			return in;
		}
		~Sachkinhte(){}
};
#endif
