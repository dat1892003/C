#include<iostream>
#include<math.h>
using namespace std;
class phanso{
	private:
		int tuso,mauso;
	public:
		void nhap();
		void xuat();
		void cong(phanso a);
		void tru(phanso a);
		void nhan(phanso a);
		void chia(phanso a);
		void rut_gon();
};
void phanso::nhap(){
	cout<<"nhap vao tu so:";
	cin>>tuso;
	do{
	cout<<"nhap vao mau so:";
	cin>>mauso;
	}while(mauso==0);
}
void phanso::rut_gon(){
	for(int i=abs(mauso);i>0;i--)
 		if(tuso%i==0&&mauso%i==0){
 			mauso=mauso/i;
 			tuso=tuso/i;
 			break;
		 }
    if(mauso!=1) cout<<tuso<<"/"<<mauso<<endl;
    else cout<<tuso<<endl;
}
void phanso::cong(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.mauso+a.tuso*mauso;
	cout<<"ket qua cong hai phan so la:";
	c.rut_gon();
}
void phanso::tru(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.mauso-a.tuso*mauso;
	cout<<"ket qua tru hai phan so la:";
	c.rut_gon();
}
void phanso::nhan(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.tuso;
	cout<<"ket qua nhan hai phan so la:";
	c.rut_gon();
}
void phanso::chia(phanso a){
	phanso c;
	c.mauso=mauso*a.tuso;
	c.tuso=tuso*a.mauso;
	cout<<"ket qua chia hai phan so la:";
	c.rut_gon();
}
void phanso::xuat(){
	cout<<tuso<<"/"<<mauso<<endl;
}
int main(){
	phanso ps1,ps2;
	cout<<"nhap vao phan so 1:"<<endl;
	ps1.nhap();
	cout<<"nhap vao phan so 2:"<<endl;
	ps2.nhap();
	cout<<"hai phan so vua nhap la:"<<endl;
	ps1.xuat();
	ps2.xuat();
	ps1.cong(ps2);
	ps1.tru(ps2);
	ps1.nhan(ps2);
	ps1.chia(ps2);
	return 0;
}
