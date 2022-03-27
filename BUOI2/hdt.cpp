#include <iostream.h>
class  soPhuc{
	private:
		int pt, pa;
	public:
		void Nhap(){
			
				cout <<"Nhap phan thuc: ";
				cin >> pt;
				cout <<"Nhap phan ao: ";
				cin >> pa;		
		}
		void Xuat(){
			cout <<"\nA = "<<pt<<" + "<<" *j"<<endl;
		}
		int getPT(){
			return pt;
		}
		int getPA(){
			return pa;
		}
};
int main()
{
	soPhuc  a[2];
	for(int i = 0; i < 2; i++){
		a[i].Nhap();
	}
	cout <<"\nTong 2 so phuc la: "
		 << a[0].getPT() + a[1].getPT() 
		 << " + " 
		 << a[0].getPA() + a[1].getPA()
		 << " *j";   
	cout <<"\nHieu 2 so phuc la: "
		 << a[0].getPT() - a[1].getPT() 
		 << " + (" 
		 << a[0].getPA() - a[1].getPA()
		 << ") *j";   
	cout <<"\nTich 2 so phuc la: "
		 << a[0].getPT() * a[1].getPT() 
		 << " + " 
		 << a[0].getPA() * a[1].getPA()
		 << " *j";   
	cout <<"\nThuong 2 so phuc la: "
		 << a[0].getPT() / a[1].getPT() 
		 << " + " 
		 << a[0].getPA() / a[1].getPA()
		 << " *j";                                  
	return 0;
}