#include<iostream>
#include<math.h>
using namespace std;
class Phanso{
	private:
	int tu;
	int mau;
	public:
		void xuat(){
			cout<<tu<<"/"<<mau<<endl;
	}
		void nhap(){
			cout<<"nhap tu so:";
			cin>>tu;
			do{
			cout<<"nhap mau so:";
			cin>>mau;
			}while(mau==0);
	}
		Phanso rutgon(){
			Phanso tam;
			for(int i=abs(mau);i>0;i--)
 				if(tu%i==0&&mau%i==0){
 				tam.mau=mau/i;
 				tam.tu=tu/i;
 			break;
		 	}	
			return tam;	
		}
		Phanso operator *(Phanso ps){
			Phanso tam;
			tam.tu=tu*ps.tu;
			tam.mau=mau*ps.mau;
			return tam;
		}
		Phanso operator+(int a){
			Phanso tam;
			tam.tu=tu+mau*a;
			tam.mau=mau;
			return tam;
		}
		friend Phanso operator+(int a,Phanso ps){
			Phanso tam;
			tam.tu=ps.tu+ps.mau*a;
			tam.mau=ps.mau;
			return tam;
		}
};
int main(){
	Phanso ps1,ps2,ps3,ps4;
	int k,m;
	ps1.nhap();
	ps2.nhap();
	cout<<"nhap vao k,m:"; cin>>k>>m;
	ps3=k + ps1 * ps2 + m;
	ps4=ps3.rutgon();
	ps4.xuat();
	return 0;
}
