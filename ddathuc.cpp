//Nguyen Minh Tien
//a30743

s#include <iostream>
using namespace std;

class DaThuc
{
	private:
		int Bac;
		int HeSo[50];
	public:
		DaThuc()
		{
			this -> Bac =1;
		}
		DaThuc(int a)
		{
			this -> Bac =a;
			for(int i=1; i<=a; i++)
			{
				HeSo[i] = 0;
			}
		}
		DaThuc (int a, int heso[])
		{
			this -> Bac =a;
			for(int i=0; i<=a; i++)
			{ 
				HeSo[i] = heso[i]; 
			}
		}
		//setters
		void setBac(int a)
		{
			this -> Bac =a;
		} 
		void setHeso_nth(int nth, int val)	
		{
			HeSo[nth] = val;
		}
		void setHeSo( int heso[])
		{
			for(int i=0; i<= this -> Bac ; i++)
			{
				HeSo[i] = heso[i];
			}
		}
		//getters
		int getBac()
		{
			return this -> Bac;
		}
		int get_Heso_nth(int nth)
		{
			return HeSo[ nth ];
		}
		//Cong da thuc
		DaThuc operator + (DaThuc b)
		{
			DaThuc kq;
			int Bac_kq = this -> Bac > b.getBac() ? this->Bac : b.getBac();
		
			char f;
			if(Bac_kq == this -> Bac)
			{
				kq = *this;
				f='a';
			}
			else
			{
				kq= b;
				f='b';
			}
			if( f=='a')
			{
				for(int i= this-> Bac - b.getBac(); i<= this -> Bac; i++)
				{
					kq.setHeso_nth(i,  this -> HeSo[i] + b.get_Heso_nth(i - (this-> Bac - b.getBac())));
				}
			}
			else
			{
				for(int i=  b.getBac() - this -> Bac ; i<= b.getBac(); i++)
				{
					kq.setHeso_nth(i,  this -> HeSo[i - (b.getBac() - this -> Bac)] + b.get_Heso_nth(i ));
				}
			}
			return kq;
		}
		//Tru da thuc
		DaThuc operator - (DaThuc b)
		{
			for(int i=0; i<= b.getBac(); i++)
				{
				b.setHeso_nth(i, b.get_Heso_nth(i) * -1);
				}
			return *this + b;
		}
		//Nhan da thuc
		DaThuc operator * (DaThuc b)
			{
			DaThuc kq;
			for(int i=0; i<= kq.getBac(); i++)
			{
				kq.setHeso_nth(i, 0);
			}
		
			for(int i=0; i<= this ->Bac; i++)
			{
				for(int k=0; k<= b.getBac(); k++)
				{

					kq.HeSo[i+k] += this -> HeSo[i] * b.get_Heso_nth(k);
				}
			}
			return kq;
		}	
		void Nhap()
		{
			cout<<"Nhap bac da thuc: ";
			cin >> this ->Bac;
			for(int i=0; i <= this-> Bac; i++)
			{
				cout<<"Nhap he so: ";
				int a;
				cin>> a;
				this -> HeSo[i] = a;
			}
		}
		void print()
		{
			int temp =this ->Bac ;  
			for(int i=0; i<= this-> Bac -1 ; i++)
			{
				cout<<this -> HeSo[i]<< "X^"<< temp --<<" + ";
			}
			cout<<endl;
		}

};

int main()
{

	DaThuc a,b,c,d;

	a.Nhap();
	b.Nhap();
	d=a + b;
	d.print();
	return 0;
}
