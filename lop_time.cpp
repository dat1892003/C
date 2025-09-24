#include<iostream>
using namespace std;
class time {
	private:
		int h,m,s;
	public:
		void nhap();
		void xuat();
		void chuan_hoa();
		void gia_tang(time);
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
void time::gia_tang(time b){
	h=h+b.h;
	m=m+b.m;
	s=s+b.s;
	chuan_hoa();
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
	a.gia_tang(b);
	cout<<"thoi gian sau khi tang la:";
	a.xuat();
	return 0;
	
}