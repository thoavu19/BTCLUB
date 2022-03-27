#include <iostream.h>
class hangHoa{
	private:
		char maHang[8];
		char tenHang[30];
		int sl;
		float dg, thanhTien;
	public:
		void Nhap(){
			fflush(stdin);
			cout <<"Nhap ma hang: ";
			cin.getline(maHang, 8);
			cout <<"Ten hang: ";
			cin.getline(tenHang, 30);
			cout <<"So luong: ";
			cin >> sl;
			cout <<"Don gia: ";
			cin >> dg;
		}
		void tinhTien(){
			thanhTien = sl*dg;
		}
		void Xuat(){
			cout <<"MA HANG: "<<maHang
				 <<"\nTEN HANG: "<<tenHang
				 <<"\nSO LUONG: "<<sl
				 <<"\nDON GIA: "<<dg
				 <<"\nTHANH TIEN: "<<thanhTien<<endl;				 
		}	
}
	
int main()
{	
	int n;	
	cout <<"\nNhap so hang hoa: ";
	cin >> n
	hangHoa a[n];
	for(int i = 0; i < n; i++){
		a. 
	}
	
	return 0;
}