#include<iostream>
#include<math.h>
using namespace std;
class Sophuc
{
	private:
		int phanthuc;
		int phanao;
	public:
		//setter
		void setPhanthuc(int pt)
		{
			this->phanthuc=pt;
		}
		void setPhanao(int pa)
		{
			this->phanao=pa;
		}
		void setall(int pt,int pa)
		{
			this->phanthuc=pt;
			this->phanao=pa;
		}
		//getter
		int getPhanthuc()
		{
			return this->phanthuc;
		}
		int getPhanao()
		{
			return this->phanao;
		}
		Sophuc Tong(Sophuc b)
		{
			Sophuc kq;
			kq.setPhanthuc(this->phanthuc+b.getPhanthuc());
			kq.setPhanao(this->phanao+b.getPhanao());
			return kq;
		}
		Sophuc Hieu(Sophuc b)
		{
			Sophuc kq;
			kq.setPhanthuc(this->phanthuc-b.getPhanthuc());
			kq.setPhanao(this->phanao-b.getPhanao());
			return kq;
		}
		Sophuc Tich(Sophuc b)
		{
			Sophuc kq;
			kq.setPhanthuc(this->phanthuc*b.getPhanthuc()+(this->phanao*b.getPhanao()*(-1)));
			kq.setPhanao(this->phanao*b.getPhanthuc()+this->phanthuc*b.getPhanao());
			return kq;
		}
		float trituyetdoi()
		{
			float kq=sqrt(this->phanthuc*this->phanthuc+this->phanao*this->phanao);
			return kq;
		}
};
int main()
{
	Sophuc a,b;
	int m,n,p,q;
	
	cout<<"Nhap phan thuc so thu 1: "; cin>>m;
	cout<<"Nhap phan ao so thu 1: "; cin>>n;
	cout<<"Nhap phan thuc so thu 2: "; cin>>p;
	cout<<"Nhap phan ao so thu 2: "; cin>>q;
	
	a.setall(m,n);
	b.setall(p,q);
	
	Sophuc kq=a.Tong(b);
	
	cout<<kq.getPhanthuc()<<"+"<<kq.getPhanao()<<"i"<<endl;
	
	float c=a.trituyetdoi();
	cout<<c;
}
