//Nguyen Minh Tien
//a30743

#include<iostream>
#include <math.h>
using namespace std;

class phanso
{
	private:
		int tuso;
		int mauso;
		int h;
	public:
		
		
		phanso()
		{
		    this->tuso=0;
		    this->mauso=1;
		}
		phanso(int a)
		{
		    this->tuso=a;
		    this->mauso = 1;
		}
		
		phanso(int a,int b)
		{
		    this->tuso=a;
		    this->mauso=b;
		}
		//setters
		void settuso(int ts)
		{
			this->tuso=ts;
		}
		void setmauso(int ms)
		{
			this->mauso=ms;
		}
		//getters
		int gettuso()
		{
			return this->tuso;
		}
		int getmauso()
		{
			return this->mauso;
		}
		
		phanso rutgon()
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

		phanso operator + (phanso a)
		{
			phanso kq;
			kq.settuso(this->tuso*a.getmauso()+this->mauso*a.gettuso());
			kq.setmauso(this->mauso*a.getmauso());
			return kq;
		}
		phanso operator - (phanso a)
		{
			phanso kq;
			kq.settuso(this->tuso*a.getmauso()-this->mauso*a.gettuso());
			kq.setmauso(this->mauso*a.getmauso());
			return kq;
		}
		phanso operator * (phanso a)
		{
			phanso kq;
			kq.settuso(this->tuso*a.gettuso());
			kq.setmauso(this->mauso*a.getmauso());
			return kq;
		}
		phanso operator / (phanso a)
		{
			phanso kq;
			kq.settuso(this->tuso*a.getmauso());
			kq.setmauso(this->mauso*a.gettuso());
			return kq;
		}
		
		bool operator == (phanso a)
		{
			if((this->tuso/this->mauso) == a.gettuso()/a.getmauso())
			{
				return true;
			}	
			return false;
		}
		bool operator != (phanso a)
		{
			if((this->tuso/this->mauso) != a.gettuso()/a.getmauso())
			{
				return true;
			}	
			return false;
		}
		bool operator > (phanso a)
		{
			if((this->tuso/this->mauso) > a.gettuso()/a.getmauso())
			{
				return true;
			}
			return false;	
		}
		bool operator < (phanso a)
		{
			if((this->tuso/this->mauso) < a.gettuso()/a.getmauso())
			{
				return true;
			}
			return false;	
		}
		bool operator >= (phanso a)
		{
			if((this->tuso/this->mauso) >= a.gettuso()/a.getmauso())
			{
				return true;
			}
			return false;	
		}
		bool operator <= (phanso a)
		{
			if((this->tuso/this->mauso) <= a.gettuso()/a.getmauso())
			{
				return true;
			}
			return false;	
		}
		void xuat()
		{
			cout<<this->tuso<<"/"<<this->mauso<<endl;
		}
};



int main()
{
	int n,m,p,q;
 	cin>>m>>n>>p>>q;
	phanso a(m,n);
	phanso b(p,q);
	phanso kq;
	kq=(a+b);
	kq.rutgon();
	kq.xuat();
	return 0;
}
