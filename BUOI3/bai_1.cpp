#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
struct NS {
	int ngay , thang , nam;
	NS() {
		this->ngay=this->thang=this->nam = 0;
	}
};
class Khachhang {
	private:
		char ten[30];
		NS ns;
		char cccd[10];
		char ho_khau[50];
	public:
		Khachhang() {
			strcpy(this->ten, "");
			this->ns.ngay= ns.ngay;
			this->ns.thang = ns.thang;
			this->ns.nam = ns.nam;
			strcpy(this->cccd, "");
			strcpy(this->ho_khau, " " );
		}
		~Khachhang() {

		}

		void nhap() {
			cout << "\tNhap ten khach hang: ";
			cin.getline(ten, 31);
			do {
				cout << "\tNhap ngay sinh: ";
				cin >> ns.ngay;
				if(ns.ngay< 0) {
					cout << "\n\tNhap lai ngay";
				}
			} while(ns.ngay < 0);
			do {
				cout << "\tNhap thang: ";
				cin >> ns.thang;
				if(ns.thang< 0) {
					cout << "\n\tNhap lai thang";
				}
			} while(ns.thang < 0);
			do {
				cout << "\tNhap nam: ";
				cin >> ns.nam;
				if(ns.nam< 0) {
					cout << "\n\tNhap lai nam";
				}
			} while(ns.nam < 0);

			cout << "\tNhap so cmt: ";
			cin.ignore();
			cin.getline(cccd,11);
			cout << "\tNhap ho khau: ";
			cin.getline(ho_khau, 51);
		}
		void xuat() {
			cout << "\t" << left
			     << "|    " << setw(20) << ten
			     << "|    " << setw(2) << ns.ngay << "/" << setw(2) <<  ns.thang << "/" << setw(7) << ns.nam
			     << "|    " << setw(12) << cccd
			     << "|    " << setw(21) << ho_khau << "|" <<endl;
		}
		friend istream& operator >> (istream &is, Khachhang &a) {
			a.nhap();
			return is;
		}
		friend ostream& operator << (ostream &os, Khachhang &a) {
			a.xuat();
			return os;
		}
		void set_thang(int thang) {
			this->ns.thang = thang;
		}
		int get_thang() {
			return this->ns.thang;
		}
		friend bool operator > (Khachhang &a , Khachhang &b) {
			return strlen(a.ten) > strlen(b.ten);
		}
};
void nhap(Khachhang kh[], int &n) {
	for(int i = 0; i <n ; i++) {
		cout << "\n\tNhap thong tin khach hang: " << i+1 <<endl;
		cin >> kh[i];
	}
}
void sap_xep(Khachhang kh[], int n) {
	for(int i = 0; i <n-1; i++) {
		for(int j = i+1; j <n ; j++) {
			if(kh[i] > kh[j]) {
				swap(kh[i], kh[j]);
			}
		}
	}
}
void menu();
void tieude() {
	cout <<   "\t+------------------------+-----------------+----------------+-------------------------+";
	cout << "\n\t|      Ho va Ten         |   Ngay sinh     |      CMT       |       Ho Khau           |";
	cout << "\n\t+------------------------+-----------------+----------------+-------------------------+\n";
}
void xuat(Khachhang kh[], int n) {
	sap_xep(kh,n);
	tieude();
	for(int i = 0; i <n ; i++) {
		cout << kh[i];
		cout << "\t+------------------------+-----------------+----------------+-------------------------+\n";
	}
}
void xuat_dk(Khachhang kh[], int n) {
	int dem = 0;
	for(int i = 0; i <n ; i++) {
		if(kh[i].get_thang() == 12) {
			dem++;
		}
	}
	if(dem != 0) {
		tieude();
		for(int i = 0; i <n ; i++) {
			if(kh[i].get_thang() == 12) {
				kh[i].xuat();
				cout << "\t+------------------------+-----------------+----------------+-------------------------+\n";
			}
		}
	} else cout << "\n\t[!]Khong co khach hang nao sinh nhat thang 12";
}
void menu() {
	cout << "\n\n\t+-------------------------MENU-------------------------+";
	cout << "\n\t| 1. Nhap thong tin khach hang                         |";
	cout << "\n\t| 2. In thong tin khach hang tang dan theo ten         |";
	cout << "\n\t| 3. Danh sach khach hang co sinh nhat thang 12        |";
	cout << "\n\t| 0. Thoat chuong trinh                                |";
	cout << "\n\t+------------------------------------------------------+\n";
}
int main() {
	int n, chon, dem=0;
	Khachhang *kh = new Khachhang[n];

	do {
		menu();
		cout << "\n\tNhap lua chon cua ban: ";
		cin >> chon;
		switch(chon) {
			case 1:
				cout << "\n\t[?] Nhap so khach hang: ";
				cin >> n;
				cin.ignore();
				nhap(kh,n);
				dem++;
				break;
			case 2:
				if(dem != 0) {
					xuat(kh,n);
				} else {
					cout << "\n\t[sos] Ban chua nhap thong tin khach hang\n";
				}
				break;
			case 3:
				if(dem != 0) {
					xuat_dk(kh,n);
				} else {
					cout << "\n\t[sos] Ban chua nhap thong tin khach hang\n";
				}
				break;
			case 0:
				cout << "\n\tThoat chuong trinh";
				break;
		}
	} while(chon != 0);
	return 0;
}

