//Nguyen Minh Tien
//a30743

#include <iostream>
using namespace std;


class MaTran
{
	private:
		int Dong;
		int Cot;
		double arr[50][50];
	public:
		//Constructor
		MaTran(){
			this -> Dong =1;
			this -> Cot =1;
			//arr[0][0]=0;
		}
		MaTran(int n, int m){
			for(int i=0; i< n; i++){
				for(int k=0; k< n; k++){
					this -> arr[i][k] =0;
				}
			}
		}
		// setters
		void setCot( int a) { 
			this -> Cot =a; 
		}
		void setDong( int a) { 
			this -> Dong = a; 
		}
		void setGiaTtri_CD(int i, int k, double a){
			this -> arr[i][k] = a;
		}
		//getters
		int getCot(){
		 	return this -> Cot; 
		}
		int getDong(){ 
			return this -> Dong; 
		}
		double getGiatri_CD(int i, int k){
			return this -> arr[i][k];
		}


		// overloading operator
		MaTran operator + (MaTran b){
			MaTran kq;
			if(this -> Cot == b.getCot() && this -> Dong == b.getDong() ){
				kq.setDong( this -> Dong) ;
				kq.setCot( this ->Cot) ;
			
				for(int i=0; i<this -> Dong; i++){
					for(int k=0; k< this -> Cot; k++){
						kq.setGiaTtri_CD(i, k, this ->arr[i][k] + b.getGiatri_CD(i, k) );
					}
				}
				return kq;
			}
			return kq;
		}
		MaTran operator - (MaTran b){
			MaTran kq;
			if(this -> Cot == b.getCot() && this -> Dong == b.getDong() ){
				kq.setDong( this -> Dong) ;
				kq.setCot( this ->Cot) ;
			
				for(int i=0; i<this -> Dong; i++){
					for(int k=0; k< this -> Cot; k++){
						kq.setGiaTtri_CD(i, k, this ->arr[i][k] - b.getGiatri_CD(i, k) );
					}
				}
				return kq;
			}
			return kq;
		}
		MaTran operator * (MaTran b){
			MaTran kq;
			if( this -> Cot == b.getDong() ){
				kq.setDong(this -> Dong);
				kq.setCot( b.getCot());
				////////
				int temp = 0;
				for(int i=0; i< this -> Cot; i++){
					for(int j=0; j<  this -> Cot; j++){
						temp = 0;					
						for(int k=0; k< b.getDong(); k++){
							temp += this-> arr[i][k] * b.getGiatri_CD(k, j);
						}
						kq.setGiaTtri_CD(i, j, temp);					
					}
				}
				return kq;	
			}
			return kq;
		}

		void nhap()
		{
			cout<<"Nhap Dong/ Cot : ";
			cin >>this -> Dong>>this -> Cot;
			for(int i=0; i< this -> Dong; i++){
				for(int k=0; k< this -> Cot ; k++){
					cin >> this->arr[i][k] ;
				}
			}
		}

		void xuat()
		{
			for(int i=0; i< this -> Dong; i++){
				for(int k=0; k < this -> Cot; k++){
					if( this->arr[i][k] < 10)
						cout<<" "<< this->arr[i][k] <<"   ";
					else
						cout<<this->arr[i][k]<<"   ";
				}
				cout<<"\n";
			}
		}


};
int main(){
	MaTran a,b;
	a.nhap();
	b.nhap();
	
	cout<<"Chon tac vu muon thuc hien trong cac tac vu sau :\n";
	cout<<"\t1: tinh tong\n";
	cout<<"\t2: tinh hieu\n";
	cout<<"\t3: tinh tich\n";
	cout<<"\t4: tinh thuong\n";

	int c;
	cin >>c;
	switch (c) {
		case 1:
			cout<<"a + b \n";
			(a+b).xuat();
			break;
		case 2:	
			cout<<"a - b \n";
			(a-b).xuat();
			break;
		case 3:
			cout<<"a * b \n";
			(a * b).xuat();
			break;
		case 4:
			cout<<"Not done yet\n";
		default :
			cout<<"Error\n";
	}
	return 0;

}
