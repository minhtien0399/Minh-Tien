#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class date
{
	protected:
		int ngay;
		int thang;
		int nam;
	public;
		date()
		{
			this ngay = 0;
			this thang = 0;
			this nam = 0;
		}
		//setters
		void setNgay(int ng)
		{
			this -> ngay = ng;
		}
		void setThang(int ng)
		{
			this -> thang = th;
		}
		void setNam(int ng)
		{
			this -> nam = nam;
		}
		void setDate(int ng, int th, int nam)
		{
			this -> ngay = ng;
			this -> thang = th;
			this -> nam = nam;
		}
		//getters
		int getNgay()
		{
			return this-> ngay;
		}
		int getThang()
		{
			return this-> thang;
		}
		int getNam()
		{
			return this-> nam;
		}
};
class maytinh
{
	protected:
		date a;
		string hangsanxuat;
	public:
		maytinh():date(0,0,0),hangsanxuat(""){}
		maytinh(int ng, int th, int nam, string h):a(ng,th,nam),hangsanxuat(h){}
		//setters
		void setHangsanxuat(string h)
		{
			this -> hangsamxuat = h
		}
		//getters
		string getHangsanxuat()
		{
			return this -> hngsanxuat;
		}
		
		
};
class maytinhdeban: public maytinh
}
	protected:
		maytinh mt1;
		bool casee;
	public:
		maytinhdeban():maytinh,casee(1){}
		maytinhdeban(int ng, int th, int nam, string h, bool casee):maytinh()ng, th, nam h),casee(casee){}
			friend ostream &operator <<(ostream & out, maytinhdeban &mtdb)
		{
			cout<<mtdb.mt1<<"/"<<mtdb.casee;
			return out;
		}
};
class maytinhsachtay: public maytinh
{
	protected:
		maytinh mt;
		float cannang;
	public:
		maytinhsachtay()
		{
			this cannang = 0;
		}
		void setCannang(float c)
		{
			this -> cannang = c;
		]
		float getCannang()
		{
			return this -> cannang;
		}
		maytinhsachtay(int d, int m, int y,string h,float gam):maytinh(d,m,y,h),cannang(gam){}
		friend ostream &operator << (ostream & out, maytinhsachtay &mtxt)
		{
			cout<<mtxt.mt<<"/"<<mtxt.cannang;
			return out;
		}
		
};

