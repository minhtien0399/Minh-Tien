#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <iostream>
#include <string>
using namespace std;
class Nhanvien
{
	protected:
		string Hoten;
		int Namsinh;
		string Socmt;
		float luongcoban;
		int songaycong;
		string donvicongtac;
	public:
		Nhanvien():Hoten(""), Namsinh(0), Socmt(""), luongcoban(0.0),songaycong(26), donvicongtac(""){}
		Nhanvien(string ten, int dob, string cmt, float LCB, int NC, string DVCT)
		:Hoten(ten), Namsinh(dob), Socmt(cmt), luongcoban(LCB), songaycong(NC), donvicongtac(DVCT){}
		
		//setters
		void setTen(string ten)
		{
			this -> Hoten = ten;
		}
		void setNamsinh(int dob)
		{
			this -> Namsinh = dob;
		}
		void setSocmt(string cmt)
		{
			this -> Socmt = cmt;
		}
		void setLuong(float LCB)
		{
			this -> luongcoban = LCB;
		}
		void setNgaycong(int NC)
		{
			this -> songaycong = NC;
		}
		void setDonvicongtac(string DVCT)
		{
			this -> donvicongtac = DVCT;
		}

		//getters
		string getTen()
		{
			return this -> Hoten;
		}
		int getNamsinh()
		{
			return this -> Namsinh;
		}
		string getSocmt()
		{
			return this -> Socmt;
		}
		float getLuongcoban()
		{
			return this -> luongcoban;
		}
		int getNgaycong()
		{
			return this -> songaycong;
		}
		string getDonvicongtac()
		{
			return this -> donvicongtac;
		}

		virtual float tinhluong()
		{
			return (this -> luongcoban * this ->songaycong)/26;
		}

		friend istream &operator >> (istream &in, Nhanvien & nv)
		{
			cout<<"Ten: ";in>>nv.Hoten;
			cout<<"Nam sinh: "; in>>nv.Namsinh;
			cout<<"So cmt: ";in>>nv.Socmt;
			cout<<"Luong co ban: "; in>>nv.luongcoban;
			cout<<"So ngay cong: "; in>>nv.songaycong;
			cout<<"Don vi cong tac: "; in>>nv.donvicongtac;
			return in;
		}
		void getData()
		{
			cout<<"Enter name:"; getline(cin,name);
			cout<<"Enter age:"; cin>>age;
		}
 
		void showData()
		{
			cout<<"Name:"<<name<<",Age:"<<age<<endl;
		}
		~Nhanvien(){}

};

