#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct ThongTin
{
	string MSV;
	double ngay;
	double thang;
	double nam;
	string khoa;
	double K;
};
struct SinhVien
{
	string MSV1;
	double diemQT;
	double diemLT;
	double diemTH;
	double diemTK;
	string XL;
};
void info();
int ThucDon();
void Nhap(ThongTin ds[], int &n);
void Xuat(ThongTin ds[], int n);
void LuuFile(ThongTin ds[], int n);
void nhap(SinhVien dssv[], int &n1);
double tongDTB(SinhVien dssv[],int n1);
void XepLoai(SinhVien dssv[],int n1);
void SapXep(SinhVien dssv[],int n1);
void xuat(SinhVien dssv[], int n1);
void Luu(SinhVien dssv[], int n1);
int main()
{
	ThongTin ds[10000];
	int n;


	int chon;
	do
	{
		system("clear");
		chon = ThucDon();
		switch (chon)
		{
		case 1:
			Nhap(ds,n);
			break;
		case 2:
			Xuat(ds,n);
			break;
		case 3:
			LuuFile(ds,n);
			break;
		case 4:
		{
			SinhVien dssv[10000];
			int n1;
			nhap(dssv,n1);
			XepLoai(dssv,n1);
			SapXep(dssv,n1);
			xuat(dssv,n1);
			cout<<"TB: "<<tongDTB(dssv,n1)<<endl;
			Luu(dssv,n1);
			break;
		}
		case 5:
			info();
		case 0:
			break;
		};
		cout<<"Nhap ky tu va enter de tiep tuc: ";
		cin.ignore();
		cin.get();
		
	} while (chon != 0);
	return 0;
}
//=============================================================
void info()
{
	cout<<"Nguyen Minh Tien\n";
	cout<<"MSV A30743\n";
	cout<<"Lop Ti30h2\n";
	cout<<"lop tin 2.2\n";
}
//=============================================================
int ThucDon()
{
	int chon;
	cout<<"CHUONG TRINH QUAN LY Sv\n";
	cout<<"\t1. Them thong tin\n";
	cout<<"\t2. Hien thi\n";
	cout<<"\t3. Luu xuong file\n";
	cout<<"\t4. Tinh diem\n";
	cout<<"\t5. Thong tin sinh vien\n";
	cout<<"\t0. Thoat\n";
	cout<<"Chon mot chuc nang: ";
	cin>>chon;
	return chon;
}
//=============================================================
void Nhap(ThongTin ds[], int &n)
{
	cout<<"Nhap so luong sinh vien: ";
	cin>> n;
	
	for(int i = 0;i<n;i++)
	{
		cout<<"Nhap thong tin sv thu "<<i+1<<endl;
		cout<<"Nhap MSV: ";
		cin>>ds[i].MSV;
		
		cout<<"Nhap ngay sinh: ";
		cin>>ds[i].ngay;
		
		cout<<"Nhap thang sinh: ";
		cin>>ds[i].thang;
		
		cout<<"Nhap nam sinh: ";
		cin>>ds[i].nam;

		cout<<"Nhap khoa dang hoc(TI,TE,NE,..): ";
		cin>>ds[i].khoa;

		cout<<"Nhap khoa(k..): ";
		cin>>ds[i].K;
		
	}
}

//=============================================================
void Xuat(ThongTin ds[], int n)
{
	cout<<"MSV\t Ngay sinh \t Thang sinh \t Nam sinh \t Khoa \t K "<<endl;
	for(int i = 0;i<n;i++)
	{
		cout<<ds[i].MSV<<"\t\t ";
		cout<<ds[i].ngay<<"\t\t ";
		cout<<ds[i].thang<<"\t ";
		cout<<ds[i].nam<<"\t\t ";
		cout<<ds[i].khoa<<"\t ";
		cout<<ds[i].K<<"\n";
	}
}

//=============================================================
void LuuFile(ThongTin ds[], int n)
{
	char fileName[10000];
	cout<<"Nhap ten file muon luu: ";
	cin.ignore();
	cin.getline(fileName, 10000);
	
	ofstream fout(fileName);
	fout<<n<<endl;
	for(int i = 0; i<n; i++)
	{
		fout<<"MSV "<<ds[i].MSV<<" \n";
		fout<<"\tNgay sinh "<<ds[i].ngay<<" \n";
		fout<<"\tThang sinh "<<ds[i].thang<<" \n";
		fout<<"\tNam sinh "<<ds[i].nam<<" \n";
		fout<<"\tKhoa "<<ds[i].khoa<<" \n";
		fout<<"\tK "<<ds[i].K<<" \n";
	}
	fout.close();	
}
//=============================================================
void nhap(SinhVien dssv[], int &n1)
{
	cout<<"Nhap so luong sinh vien: ";
	cin>> n1;
	
	for(int i = 0;i<n1;i++)
	{
		cout<<"Nhap thong tin sv thu "<<i+1<<endl;
		cout<<"Nhap MSV: ";
		cin>>dssv[i].MSV1;
		
		cout<<"Nhap diemQT: ";
		cin>>dssv[i].diemQT;
		
		cout<<"Nhap diemLT: ";
		cin>>dssv[i].diemLT;
		
		cout<<"Nhap diemTH: ";
		cin>>dssv[i].diemTH;
		
		dssv[i].diemTK = dssv[i].diemQT*0.3 + 0.7*(dssv[i].diemTH + dssv[i].diemLT)/2;
	}
}
//=============================================================
double tongDTB(SinhVien dssv[],int n)
{
	double tong = 0;
	for(int i =0;i< n;i++)
	{
		tong += dssv[i].diemTK;
	}
	return tong/n;
}
//=============================================================
void XepLoai(SinhVien dssv[],int n1)
{
	for(int i = 0;i<n1;i++)
	{
		if(dssv[i].diemTK < 4.6)
			dssv[i].XL = "Truot";
		else if(dssv[i].diemTK < 6.6)
			dssv[i].XL = "TB";
		else if (dssv[i].diemTK < 7.6)
			dssv[i].XL = "K";
		else if (dssv[i].diemTK < 8.6)
			dssv[i].XL = "G";
		else
			dssv[i].XL ="SX";
	}
}

//=============================================================
void SapXep(SinhVien dssv[],int n1)
{
	for(int i = 0;i<n1;i++)
	{
		for(int j = i;j <n1;j++)
		{
			if(dssv[i].diemTK < dssv[j].diemTK)
			{
				SinhVien temp = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = temp;
			}
		}
	}
}
//=============================================================
void xuat(SinhVien dssv[], int n1)
{
	cout<<"MSV\t DTK\t XL"<<endl;
	for(int i = 0;i<n1;i++)
	{
		cout<<dssv[i].MSV1<<"\t ";
		cout<<dssv[i].diemTK<<"\t ";
		cout<<dssv[i].XL<<"\t "<<endl;
	}
}
//=============================================================
void Luu(SinhVien dssv[], int n1)
{
	char fileName[10000];
	cout<<"Nhap ten file muon luu: ";
	cin.ignore();
	cin.getline(fileName, 10000);
	
	ofstream fout(fileName);
	fout<<n1<<endl;
	for(int i = 0; i<n1; i++)
	{
		fout<<"MSV "<<dssv[i].MSV1<<" \n";
		fout<<"\tDiem tong ket "<<dssv[i].diemTK<<" \n";
		fout<<"\tXep loai "<<dssv[i].XL<<" \n";
	}
	fout.close();	
}
//==============================================================
