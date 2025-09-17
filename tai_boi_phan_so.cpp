#include<iostream>
#include<math.h>
using namespace std;
class phanso{
	private:
		int tuso,mauso;
	public:
		void nhap();
		void xuat();
		phanso operator +(phanso a);
		phanso operator -(phanso a);
		phanso operator *(phanso a);
		phanso operator /(phanso a);
		phanso operator =(phanso a);
		void  operator ==(phanso a);
		phanso operator +=(phanso a);
		phanso operator -=(phanso a);
		phanso operator *=(phanso a);
		phanso operator /=(phanso a);
		void operator <(phanso a);
		void operator >(phanso a);
		void operator <=(phanso a);
		void operator >=(phanso a);
		void operator !=(phanso a);	
		phanso rut_gon();
};
void phanso::nhap(){
	cout<<"nhap vao tu so:";
	cin>>tuso;
	do{
	cout<<"nhap vao mau so:";
	cin>>mauso;
	}while(mauso==0);
}
phanso phanso::rut_gon(){
	for(int i=abs(mauso);i>0;i--)
 		if(tuso%i==0&&mauso%i==0){
 			mauso=mauso/i;
 			tuso=tuso/i;
 			break;
		 }
    return *this;
}
phanso phanso::operator+(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.mauso+a.tuso*mauso;
	return c;
}
phanso phanso::operator+=(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.mauso+a.tuso*mauso;
	mauso=c.mauso;
	tuso=c.tuso;
	return *this;
}
phanso phanso::operator -(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.mauso-a.tuso*mauso;
	return c;
}
phanso phanso::operator -=(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.mauso-a.tuso*mauso;
	mauso=c.mauso;
	tuso=c.tuso;
	return *this;
}
phanso phanso::operator *(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.tuso;
	return c;
}
phanso phanso::operator *=(phanso a){
	phanso c;
	c.mauso=mauso*a.mauso;
	c.tuso=tuso*a.tuso;
	mauso=c.mauso;
	tuso=c.tuso;
	return *this;
}
phanso phanso::operator /(phanso a){
	phanso c;
	c.mauso=mauso*a.tuso;
	c.tuso=tuso*a.mauso;
	return c;
}
phanso phanso::operator /=(phanso a){
	phanso c;
	c.mauso=mauso*a.tuso;
	c.tuso=tuso*a.mauso;
	mauso=c.mauso;
	tuso=c.tuso;
	return *this;
}
phanso phanso::operator =(phanso a){
	mauso=a.mauso;
	tuso=a.tuso;
	return *this;
}
void phanso::operator ==(phanso a){
	if(mauso==a.mauso && tuso==a.tuso)
		cout<<"dung";
	else cout<<"sai";
}
void phanso::operator <=(phanso a){
	if(mauso>=a.mauso && tuso<=a.tuso)
		cout<<"dung";
	else cout<<"sai";
}
void phanso::operator >=(phanso a){
	if(mauso<=a.mauso && tuso>=a.tuso)
		cout<<"dung";
	else cout<<"sai";
}
void phanso::operator <(phanso a){
	if(mauso>a.mauso && tuso<=a.tuso)
		cout<<"dung";
	else cout<<"sai";
}
void phanso::operator >(phanso a){
	if(mauso<a.mauso && tuso>=a.tuso)
		cout<<"dung";
	else cout<<"sai";
}
void phanso::operator !=(phanso a){
	if(mauso!=a.mauso && tuso!=a.tuso)
		cout<<"dung";
	else cout<<"sai";
}
void phanso::xuat(){
	cout<<tuso<<"/"<<mauso<<endl;
}
int main(){
	phanso ps1,ps2,ps3;
	cout<<"nhap vao phan so 1:"<<endl;
	ps1.nhap();
	cout<<"nhap vao phan so 2:"<<endl;
	ps2.nhap();
	ps1>=ps2;
	return 0;
}
