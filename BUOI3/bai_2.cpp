#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Giaovien {
	private:
		char ten[30];
		int tuoi;
		char bc[15];
		char chuyen_nganh[20];
		float bac_luong;
		float tien_luong;
	public:
		Giaovien () {
			strcpy(this->ten, "");
			this->tuoi= 0;
			strcpy(this->bc,"");
			strcpy(this->chuyen_nganh, "");
			this->bac_luong = 0;
			this->tien_luong = 0;
		}
		~Giaovien() {

		}

		void nhap() {
			cin.ignore();
			cout << "\tNhap ten giao vien: ";
			cin.getline(ten,31);
			cout << "\tNhap tuoi: ";
			cin >> tuoi;
			cout << "\tNhap bang cap: ";
			cin.ignore();
			cin.getline(bc,16);
			cout << "\tNhap chuyen nganh: ";
			cin.getline(chuyen_nganh,21);
			cout << "\tNhap bac luong: ";
			cin >> bac_luong;
		}
		float get_luong() {
			this->tien_luong = bac_luong * 610;
			return this->tien_luong;
		}
		char* get_cn() {
			return this->chuyen_nganh;
		}

		void xuat() {
			cout << "\t" << left
			     << "|  " << setw(22) << ten
			     << "|    " << setw(8) << tuoi
			     << "|    " << setw(12) << bc
			     << "|  " << setw(19) << chuyen_nganh
			     << "|    " << setw(11) << bac_luong
			     << "|     " << setw(12) << get_luong() <<  "|" <<endl;
		}

		friend istream& operator >> (istream &is, Giaovien &a) {
			a.nhap();
			return is;
		}

		friend ostream& operator << (ostream &os, Giaovien &a) {
			a.xuat();
			return os;
		}
};
void tieude();
void menu();
void nhap(Giaovien *gv, int &n) {
	for(int i = 0; i <n ; i++) {
		cout << "\n\t[+]Nhap thong tin giao vien thu " << i+1 <<endl;
		cin >> gv[i];
	}
}

void xuat(Giaovien *gv, int n) {
	tieude();
	for(int i = 0; i <n ; i++) {
		cout << gv[i];
		cout << "\t+------------------------+------------+----------------+---------------------+---------------+-----------------+\n";
	}
}
void xuat_dk(Giaovien *gv, int n) {
	int dem = 0;
	for(int i = 0; i <n; i++) {
		if(gv[i].get_luong() < 2000) {
			dem++;
		}
	}
	if(dem != 0) {
		tieude();
		for(int i = 0; i <n; i++) {
			if(gv[i].get_luong() < 2000) {
				cout << gv[i];
				cout << "\t+------------------------+------------+----------------+---------------------+---------------+-----------------+\n";
			}
		}
	} else cout << "\n\tKhong co gia vien nao co luong < 2000";
}
void sapxep(Giaovien *gv, int n) {
	for(int i = 0; i <n-1 ; i++) {
		for(int j = i+1; j <n; j++) {
			if(strcmp(gv[i].get_cn(),gv[j].get_cn()) < 0) {
				Giaovien tg = gv[i];
				gv[i] = gv[j];
				gv[j] = tg;
			}
		}
	}

	xuat(gv,n);
}
void tieude() {
	cout <<   "\t+------------------------+------------+----------------+---------------------+---------------+-----------------+";
	cout << "\n\t|      Ho va Ten         |    Tuoi    |    Bang Cap    |    Chuyen nganh     |   Bac Luong   |  Tong Luong     |";
	cout << "\n\t+------------------------+------------+----------------+---------------------+---------------+-----------------+\n";
}
void menu() {
	cout << "\n\n\t+-------------------------MENU-------------------------+";
	cout << "\n\t| 1. Nhap thong tin Giao Vien                          |";
	cout << "\n\t| 2. In thong tin Giao Vien                            |";
	cout << "\n\t| 3. Danh sach Giao Vien co tien luong < 2000          |";
	cout << "\n\t| 4. Danh sach Giao Vien sap xep theo chuyen nganh     |";
	cout << "\n\t| 0. Thoat chuong trinh                                |";
	cout << "\n\t+------------------------------------------------------+\n";
}
int main() {
	int n, chon,dem=0;
	Giaovien *gv = new Giaovien[n];
	do {
		menu();
		cout << "\n\tNhap lua chon cua ban: ";
		cin >> chon;
		switch(chon) {
			case 1:
				cout << "\n\t[?] Nhap so Giao Vien: ";
				cin >> n;
				nhap(gv,n);
				dem++;
				break;
			case 2:
				if(dem != 0) {
					xuat(gv,n);
				} else {
					cout << "\n\t[sos] Ban chua nhap thong tin Giao Vien\n";
				}
				break;
			case 3:
				if(dem != 0) {
					xuat_dk(gv,n);
				} else {
					cout << "\n\t[sos] Ban chua nhap thong tin Giao Vien\n";
				}
				break;
			case 4:
				if(dem != 0) {
					sapxep(gv,n);
				} else {
					cout << "\n\t[sos] Ban chua nhap thong tin Giao Vien\n";
				}
				break;
			case 0:
				cout << "\n\tThoat chuong trinh";
				break;
		}
	} while(chon != 0);
	return 0;
}

