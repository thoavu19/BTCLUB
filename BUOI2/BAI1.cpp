#include<iostream.h>
#include<iomanip.h>

class KH{
	private: 
		char ht[30];
		struct NS
		{
			int ngay ;
			int thang;
			int nam;
		};
		char cmt[10];
		char hoKhau[50];
		NS ns;
	public:		
		void Nhap()
		{			
				fflush(stdin);
				cout <<"Nhap ten khach hang: ";
				cin.getline(ht, 30);
				cout <<"Nhap Ngay Thang Nam Sinh: ";
				do{
					cout <<"\n\tNgay: ";
					cin >> ns.ngay;	
				}while(ns.ngay <= 0 || ns.ngay > 31);				
				do{
					cout <<"\tThang: ";
					cin >> ns.thang;	
				}while(ns.thang <= 0 || ns.thang > 12);				
				cout <<"\tNam: ";
				cin >> ns.nam;
				fflush(stdin);
				cout <<"Nhap Chung Minh Thu: ";
				cin.getline(cmt, 10);
				cout <<"Nhap Ho Khau: ";
				cin.getline(hoKhau, 50);								
		}
		void Xuat()
		{
			cout <<setw(30)<<ht
				 <<setw(22)<<ns.ngay
				 <<setw(1)<<"/"
				 <<setw(2)<<ns.thang
				 <<setw(1)<<"/"
				 <<setw(4)<<ns.nam
				 <<setw(15)<<cmt
				 <<setw(51)<<hoKhau<<endl;
				 
		}
		char * getht(){
			return ht;
		}
		int getthang(){
			return ns.thang;
		}
		
};
void tieuDe()
		{
			cout <<setw(30)<<"Ho Ten"
				 <<setw(30)<<"Ngay Sinh"
				 <<setw(15)<<"CMT"
				 <<setw(51)<<"Ho Khau"<<endl;	
		}
int main()
{
	int n;
	cout <<"So khach hang can nhap: ";cin >> n;
	KH a[n];	
	for(int i = 0; i < n; i++){
		a[i].Nhap();
	}
	cout <<"\n\t\t\tIN DANH SACH!!"<<endl;
	tieuDe();
	for(int i = 0; i < n; i++){
		a[i].Xuat();
	}
	KH tg;
	cout <<"SAP XEP TANG DAN!!"<<endl;
	tieuDe();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmpi(a[i].getht(), a[j].getht()) > 0){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;	
			}
		}
		a[i].Xuat();
	}
	cout <<"DANH SACH KHACH HANG SN THANG 12!!!"<<endl;
	tieuDe();
	for(int i = 0; i < n; i++){
		if(a[i].getthang() == 12){
			a[i].Xuat();
		}else{
			cout <<"\t\t\tKHONG CO KHACH SINH THANG 12!!"<<endl;
		}
	}
	cout <<endl;
	return 0;
}