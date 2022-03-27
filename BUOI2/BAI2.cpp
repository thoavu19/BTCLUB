#include<iostream.h>
#include<iomanip.h>
using namespace std;
class GV{
	private:
		char ht[30];
		int t;
		char bc[15];
		char cNganh[20];
		float bl, lcb;
	public:
		void Nhap(){
			fflush(stdin);
			cout <<"Nhap ho ten: ";
			cin.getline(ht, 30);
			cout <<"Nhap tuoi: ";
			cin >> t;
			fflush(stdin);
			cout <<"Nhap bang cap: ";
			cin.getline(bc, 15);
			cout <<"Nhap chuyen nganh: ";
			cin.getline(cNganh, 15);
			cout <<"Nhap bac luong: ";
			cin >> bl;
		}
		float tinhLuong(){
			return lcb = bl * 610;
		}
		void Xuat(){
			cout <<setw(30)<<ht
				 <<setw(15)<<t
				 <<setw(15)<<bc
				 <<setw(20)<<cNganh
				 <<setw(8)<<bl
				 <<setw(10)<<tinhLuong()<<endl;
		}	
	
	char * getcNganh(){
			return cNganh;
		}	
};
void tieuDe(){
	cout <<setw(30)<<"HO TEN"
		 <<setw(15)<<"TUOI"
		 <<setw(15)<<"BANG CAP"
		 <<setw(20)<<"CHUYEN NGANH"
		 <<setw(8)<<"BAC LUONG"
		 <<setw(10)<<"LUONG CB"<<endl;
}
int main()
{
	int n;
	cout <<"NHAP SO LUONG GIAO VIEN: ";cin >> n;
	GV a[n];
	for(int i = 0; i < n; i++){
		a[i].Nhap();
	}
	cout <<"\n\t\t\tIN DANH SACH GIAO VIEN!!"<<endl;
	tieuDe();
	for(int i = 0; i < n; i++){
		a[i].Xuat();
	}
	cout <<"\n\t\t\tCAC GIAO VIEN CO LUONG DUOI 2000!!\n";
	tieuDe();
	for(int i = 0; i < n; i++){
		if( a[i].tinhLuong() < 2000){
			a[i].Xuat();
		}else{
			cout <<"\n\t\t\tKHONG CO GIAO VIEN NAO!!\n";
			break;
		}
	}
	cout <<"\n\t\t\tDANH SACH SAP XEP THEO CHUYEN NGANH!!\n";
	tieuDe();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmpi(a[i].getcNganh(), a[j].getcNganh()) > 0){
				swap(a[i], a[j]);	
			}
		}
		a[i].Xuat();
	}
	cout <<endl;
	return 0;
}