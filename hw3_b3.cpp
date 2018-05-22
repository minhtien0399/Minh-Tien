#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class NhanSu
{
	protected:
		string TenNS;
		float LuongCB;
	public:
		void setTenNS(string a)
		{
			TenNS = a;
		}
		string getTenNS()
		{
			return TenNS;
		}
		void setLuongCB(float b)
		{
			LuongCB = b;
		}
		float getLuongCB()
		{
			return LuongCB;
		}
		void print()
		{
			cout<<TenNS<<endl;
			cout<<LuongCB<<endl;
		}	
};
class NhanVien: public NhanSu
{
	protected:
		float HSL;
	public:
		void setHSL(float a)
		{
			HSL = a;
		}
		float getHSL()
		{
			return HSL;
		}
		float TinhLuong()
		{
			return HSL*LuongCB;
		}	
};
int main()
{
	NhanVien a;
	a.setLuongCB(100);
	a.setHSL(2);
	cout<<a.TinhLuong()<<endl;
	return 0;
}
