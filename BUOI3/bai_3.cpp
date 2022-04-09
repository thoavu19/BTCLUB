#include<iostream>
using namespace std;
class Dathuc {
	private:
		int a,b,c,d;
	public:
		Dathuc() {
			this->a=this->b=this->c=this->d = 0;
		}
		~Dathuc() {

		}
		void nhap() {
			cout << "\tNhap he so a: ";
			cin >> a;
			cout << "\tNhap he so b: ";
			cin >> b;
			cout << "\tNhap he so c: ";
			cin >> c;
			cout << "\tNhap he so d: ";
			cin >> d;
		}
		void xuat() {
			// in ra a
			if(a != 0) {
				if(a ==1) {
					cout << "x^3";
				} else if(a== -1){
					cout << "-x^3";
				} else{
					cout << a << "x^3";
				}

			}
			// in ra b
			if(a != 0) {
				if(b == 1) {
					cout << " + x^2";
				} else if(b == -1) {
					cout << " - x^2";
				} else if(b > 0) {
					cout << " + "<< b << "x^2";
				} else if(b < 0) {
					cout << " - " << b*(-1) << "x^2";
				}
			} else {
				if(b != 0) {
					cout << b << "x^2";
				} else if(b == 1) {
					cout << " + x^2";
				} else if(b == -1) {
					cout << " - x^2";
				}
			}
			// in ra c
			if(b != 0) {
				if(c == 1) {
					cout << " + x";
				} else if(c == -1) {
					cout << " - x";
				} else if(c > 0) {
					cout << " + "<< c << "x";
				} else if(c < 0) {
					cout << " - " << c*(-1) << "x";
				}
			} else {
				if(c == 1) {
					cout << " + x";
				} else if(c == -1) {
					cout << " - x";
				} else if(c != 0 ) {
					cout << " + " << c << "x";
				}
			}
			// in ra d
			if(c != 0) {
				if(d > 0) {
					cout << " + "<< d;
				} else if(d < 0) {
					cout << " - " << d*(-1);
				}
			} else {
				if(d > 0) {
					if(a== 0 && b == 0) {
						cout << d;
					} else {
						cout << " + " << d;
					}
				} else if(d < 0) {
					cout <<" - " << d*(-1);
				}
			}

		}
		friend Dathuc operator + (Dathuc &m, Dathuc &n) {
			Dathuc t;
			t.a = m.a + n.a;
			t.b = m.b + n.b;
			t.c = m.c + n.c;
			t.d = m.d + n.d;
			return t;
		}
};

int main() {
	Dathuc a,b,s;
	cout << "\t[+]Nhap da thuc thu nhat:\n";
	a.nhap();
	cout << "\t=> Da thuc thu nhat la: ";
	a.xuat();
	cout << "\n\n\t[+]Nhap da thuc thu hai:\n";
	b.nhap();
	cout << "\t=> Da thuc thu hai la: ";
	b.xuat();
	cout << "\n\n\n\t[*]Tong 2 da thuc la: ";
	s = a+b;
	s.xuat();
	return 0;
}

