#include <iostream.h>
#include<math.h>

class DaThuc3{
	private:
		int a, b, c, d, x;
	public:
		void Nhap(){
			cout <<"\t\tNHAP CAC GIA TRI: "<<endl;
			cout <<"\t\t\ta = ";cin >> a;
			cout <<"\t\t\tb = ";cin >> b;
			cout <<"\t\t\tc = ";cin >> c;
			cout <<"\t\t\td = ";cin >> d;	
		}
		void Xuat(){
			if (a != 0){
				cout <<"\t\t\t"<< a <<"x^3 + "<< b <<"x^2 + "<< c <<"x + "<< d <<endl;								
			}else if(b != 0){
				cout <<"\t\t\t"<< b <<"x^2 + "<< c <<"x + "<< d <<endl;
			}else if(c != 0){
				cout <<"\t\t\t"<< c <<"x + "<< d <<endl;
			}else if(d != 0){
				cout <<"\t\t\t"<< d <<endl;
			}else{
				cout <<"\n\t\t\tKHONG TON TAI DA THUC!!!"<<endl;
			}
		}
		int geta(){
			return a;
		}
		int getb(){
			return b;
		}
		int getc(){
			return c;
		}
		int getd(){
			return d;
		}
};
int main()
{
	DaThuc3 a[2];
	cout <<"\nNHAP DA THUC!!!"<<endl;
	cout <<"\n\t\tDA THUC 1!!\n";
	a[0].Nhap();
	cout <<"\t\tDA THUC 2!!\n";
	a[1].Nhap();
	cout <<"\nXUAT DA THUC!!"<<endl;
	cout <<"\tDA THUC 1!!\n";
	a[0].Xuat();
	cout <<"\tDA THUC 2!!\n";
	a[1].Xuat();
	cout <<"\nTINH TONG 2 DA THUC!!"<<endl;
	cout <<"\n\t\t" << a[0].geta() + a[1].geta() <<"x^3 + "
 		 << a[0].getb() + a[1].getb() <<"x^2 + "
 	  	 << a[0].getc() + a[1].getc() <<"x + "
 		 << a[0].getd() + a[1].getd() <<endl<<endl;
	return 0;
}