#include <iostream.h>
int main()
{
	//if else 1-7 in cac thu
	int n;
	while(n>7 || n<1){
	   	cout <<"Nhap n: ";cin >>n;	
	}
	if(n==2){
	 	cout <<"\tMonday";
    }else if (n==3){
  	 	cout <<"\tTuesday";
    }else if(n==4){
     	cout <<"\tWednesday";
    }else if (n==5){
     	cout <<"\tThursday";
    }else if (n==6){
     	cout <<"\tFriday";
    }else if (n==7){
     	cout <<"\tStaturday";
    }else cout <<"\tSunday";
    cout << endl;
    
    //tính ti?n di?n 
	int k;
	long s = 1;
	do{
		cout <<"Nhap k: "; cin >> k;
        if(k < 0){
		 cout <<"Nhap lai "<<endl;
		} 
	}while(k<0);
	if (k >= 0 && k <= 100){
	  s = k*2000;
    }else if (k >= 101 && k <= 200){
	s = (k - 100) * 2500 + 100 * 2000;
	}else if (k >= 201 && k <= 300){
	s = (k - 200) * 3000 + (100 * 2500) + (100 * 2000);
	}else if (k > 300){
	s = (k - 300) * 5000 + (100 * 3000) + (100 * 2500) + (100 * 2000);
	}
	cout <<"\ntien dien phai tra la: " <<s<< "dong";
	cout<<endl; 
	//tính tích 2*n 
	int q, p = 1;
 	cout <<"Nhap q: "; cin >> q;
 	for(int i = 1; i <= q; i++){
	   p *= (2 * i);
	 }
	 cout <<"\nTich cua so la: "<< q <<endl;  
	
	
	// tam giac *** 
	int m,j;
	do{
		cout <<"\nNhap m: ";
		cin>>m;
	}while (m<=0);
	int a = m;
	cout <<"Tam giac duoc in ra!!"<<endl; 
	for(int i=1; i<=a; i++){
		for(j=1; j <= m; j++){
			cout<<"* ";
			}
			m--;
			cout << endl;
	}
}
