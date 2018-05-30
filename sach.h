#ifndef SACH_H
#define SACH_H
#include <iostream>
#include <string>
using namespace std;
class Sach
{
	protected:
		string tensach;
		int namxuatban;
		float heso;
		void in()
		{
			cout<<"Ten: "<<this-> tensach<<endl;
			cout<<"Nam XB: "<<this-> namxuatban<<endl;
			cout<<"He so: "<<this-> heso<<endl;
		}
	public:
		Sach():tensach(""),namxuatban(0),heso(0.0){}
		Sach(string ten, int nxb, float hs):tensach(ten),namxuatban(nxb),heso(hs){}
		
		//setters
		void setTensach(string ten)
		{
			this -> tensach = ten;
		}
		void setNamxuatban(int nxb)
		{
			this -> namxuatban = nxb;
		}
		void setTensach(float hs)
		{
			this -> heso = hs;
		}
		
		//getters
		string getTensach()
		{
			return this -> tensach;
		}
		int getNamxuatban()
		{
			return this -> namxuatban;
		}
		float getHeso()
		{
			return this -> heso;
		}
		
		virtual float tinhGia() =0;

		virtual void inra() =0;
		~Sach(){}
};
#endif
