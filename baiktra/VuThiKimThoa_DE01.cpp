#include<iostream.h>
#include<iomanip.h>

struct Ngay1 
{
	int NgayXX,Thang,Nam;
};


class PTGT
{
	protected:
		int MaPT;
		char HangSX[30];
		Ngay1 Ngay;
		int GiaCT;
	public:
		PTGT(int a=0,const char *b=" ",int c=0,int d=0,int e=0,int f=0)
		{
			this->MaPT =a;
			strcpy(this->HangSX,b);
			this->Ngay.NgayXX =c;
			this->Ngay.Thang =d;
			this->Ngay.Nam =e;
			this->GiaCT =f;
		}
		~PTGT(){
		}
		void Nhap()
		{
			cout<<"\tNHAP MA PTGT: ";
			cin>>MaPT;
			fflush(stdin);
			cout<<"\tNHAP HANG SAN XUAT: ";
			cin.getline(HangSX,30);
			cout<<"\tNHAP NGAY XUAT XUONG: "<<endl;
			do{
			cout<<"\t\tNgay: ";
			cin>>Ngay.NgayXX;
			}while(Ngay.NgayXX <= 0 || Ngay.NgayXX > 31 );
			do{
			cout<<"\t\tThang: ";
			cin>>Ngay.Thang;
			}while( Ngay.Thang <= 0 || Ngay.Thang > 12);
			do{
			cout<<"\t\tNam: ";
			cin>>Ngay.Nam;
			}while(Ngay.Nam <= 0);
			cout<<"\tNHAP GIA CHUA THUE: ";
			cin>>GiaCT;
		}
		void Xuat()
		{
			cout <<setw(30)<<MaPT
			     <<setw(25)<<HangSX
				 <<setw(12)<<Ngay.NgayXX
				 <<setw(1)<<"/"
				 <<setw(2)<<Ngay.Thang
				 <<setw(1)<<"/"
				 <<setw(4)<<Ngay.Nam
				 <<setw(20)<<GiaCT<<endl;
		}
};
void tieuDe(){
	cout <<setw(30)<<"MA PHUONG TIEN"
		 <<setw(25)<<"HANG SAN XUAT"
		 <<setw(20)<<"NGAY XUAT XUONG"
		 <<setw(20)<<"GIA CHUA THUE"<<endl;
}
class MAYBAY :public PTGT{
	private:
		char duongBay[20];
		int soCho;
		char noiDK[30];
	public:
		MAYBAY(int a=0,const char *b=" ",int c=0,int d=0,int e=0,int f=0, char* duongBay = "", int soCho = 0, char* noiDK = "")
		:PTGT(MaPT, HangSX, Ngay.NgayXX	, Ngay.Thang, Ngay.Nam, GiaCT){
			strcpy(this->duongBay, duongBay);
			this->soCho = 0;
			strcpy(this->noiDK, noiDK);
		}	
		void nhap()
		{
			PTGT ::Nhap();
			cout<<"\nNhap duong bay: ";
			cin.getline(duongBay, 20);
			cout<<"\nNhap so cho ngoi: ";
			cin>>soCho;
			cout<<"\nNhap noi dang ky: ";
			cin.getline(noiDK, 30);
		}
		void xuat()
		{
			PTGT::Xuat();
			cout<<endl;
			
};

int main()
{
	int n;
	cout<<"Nhap so phuong tien giao thong: ";
	cin>>n;
	PTGT a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap PTGT thu: "<<i+1<<endl;
	    a[i].Nhap();
	}
	cout<<"\n----THONG TIN PTGT----"<<endl;
	tieuDe();
	for(int i=0;i<n;i++)
	{
		a[i].Xuat();
		cout<<endl;
	}
	
	return 0;
}