#include<iostream>
using namespace std;
class time {
	private:
		int h,m,s;
	public:
		void nhap();
		void xuat();
		void chuan_hoa();
		void operator !=(time);
		void operator ==(time);
		time operator +=(time);
		
};
void time::nhap(){
	cin>>h>>m>>s;
	while(h<0||m<0||s<0){
		cout<<"thoi gian khong hop le vui long nhap lai:";
		cin>>h>>m>>s;
	}
}
void time::xuat(){
	cout<<h<<":"<<m<<":"<<s<<endl;
}
void time::chuan_hoa(){
	int tong;
	tong=h*3600+m*60+s;
	h=(tong/3600)%24;
	m=(tong/60)%60;
	s=(tong%60);
}
time time::operator+=(time b){
	h=h+b.h;
	m=m+b.m;
	s=s+b.s;
	chuan_hoa();
	return *this;
}
void time::operator==(time b){
 if(h==b.h&&m==b.m&&s==b.s)
 	cout<<"dung"<<endl;
else cout<<"sai"<<endl;
}
void time::operator!=(time b){
 if(h!=b.h&&m!=b.m&&s!=b.s)
 	cout<<"dung"<<endl;
else cout<<"sai"<<endl;
}
int main(){
	time a,b;
	cout<<"nhap vao thoi gian:";
	a.nhap();
	a.chuan_hoa();
	cout<<"thoi gian sau khi chuan hoa la:";
	a.xuat();
	cout<<"nhap vao thoi gian can gia tang:";
	b.nhap();
	a==b;
	a!=b;
	a+=b;
	cout<<"thoi gian sau khi tang la:";
	a.xuat();
	return 0;
	
}