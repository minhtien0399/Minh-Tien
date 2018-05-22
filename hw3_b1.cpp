#include<iostream>
#include<math.h>
using namespace std;
//lop co so
class Hinh
{
   protected:
	int chieudai;
	int chieurong;
   public:
      void setChieuRong(int rong)
      {
         chieurong = rong;
      }
      void setChieuDai(int dai)
      {
         chieudai = dai;
      }
    
};

//  lop ke thua
class HinhChuNhat: public Hinh
{
   public:
      int tinhDienTich()
      { 
         return chieurong * chieudai; 
      }
};

int main(void)
{
   HinhChuNhat Hcn;
 
   Hcn.setChieuRong(30);
   Hcn.setChieuDai(50);

   cout << "dien tich la: " << Hcn.tinhDienTich() << endl;

   return 0;
}
