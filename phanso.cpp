#include<iostream>
using namespace std;
class Phanso
{
	private:
		int tuso;
		int mauso;
	public:
		//setter
		void setTuso(int ts)
		{
			this->tuso=ts;
		}
		void setMauso(int ms)
		{
			this->mauso=ms;
		}
		void setPS(int ts, int ms)
		{
			this->tuso=ts;
			this->mauso=ms;
		}
		//getter
		int getTuso()
		{
			return this->tuso;
		}
		int getMauso()
		{
			return this->mauso;
		}
		Phanso Tong(Phanso b)
		{
			Phanso kq;
			kq.setTuso(this->tuso*b.getMauso()+this->mauso*b.getTuso());
			kq.setMauso(this->mauso*b.getMauso());
			return kq;
		}
		Phanso Tong(int n)
		//cong phan so voi mot so
		{
			Phanso kq;
			kq.setTuso(this->tuso+this->mauso*n);
			kq.setMauso(this->mauso);
			return kq;
		}
		
		Phanso Hieu(Phanso b)
		{
			Phanso kq;
			kq.setTuso(this->tuso*b.getMauso()-this->mauso*b.getTuso());
			kq.setMauso(this->mauso*b.getMauso());
			return kq;
		}
		Phanso Hieu(int n)
		//tru phan so cho mot so
		{
			Phanso kq;
			kq.setTuso(this->tuso-this->mauso*n);
			kq.setMauso(this->mauso);
			return kq;
		}
		
		Phanso Tich(Phanso b)
		{
			Phanso kq;
			kq.setTuso(this->tuso*b.getTuso());
			kq.setMauso(this->mauso*b.getMauso());
			return kq;
		}
		Phanso Tich(int n)
		//nhan phan so voi mot so
		{
			Phanso kq;
			kq.setTuso(this->tuso*n);
			kq.setMauso(this->mauso);
			return kq;
		}
		
		Phanso Toigian()
		{
		int a= this -> tuso;
		int b= this -> mauso;
		int temp;
		while (b != 0)
			{
				temp = a % b;
				a = b;
				b = temp;	
			}
		this -> tuso /= a;
		this -> mauso /= a;
		return *this;
}
};
int main()
{
	Phanso a,b,c;
	int n,m,p,q;
	cout<<"Nhap tu so cua a: "; cin>>m;
	cout<<"Nhap mau so cua a: "; cin>>n;
	cout<<"Nhap tu so cua b: "; cin>>p;
	cout<<"Nhap mau so cua b: "; cin>>q;
	a.setPS(m,n);
	b.setPS(p,q);
	
	Phanso kq=a.Tong(b);
	c=kq.Toigian();
	cout<<c.getTuso()<<"/"<<c.getMauso()<<endl;
}
