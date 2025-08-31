#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
class diem{
	private:
		int x,y,z;
	public:
		void nhap(int);
		void xuat(int);
		void khoangcach(int,diem);
};
void diem::nhap(int n){
	switch(n){
		case 2:
			cout<<"nhap vao (x,y)=";
			cin>>x;
			cin>>y;
			break;
		case 3:
			cout<<"nhap vao (x,y,z)=";
			cin>>x;
			cin>>y;
			cin>>z;
			break;		
	}
}
void diem::khoangcach(int n,diem a){
		switch(n){
		case 2:	
			cout<<fixed<<setprecision(3)<<sqrt(pow(x-a.x,2)+pow(y-a.y,2));
			break;
		case 3:
			cout<<fixed<<setprecision(3)<<sqrt(pow(x-a.x,2)+pow(y-a.y,2)+pow(z-a.z,2));
			break;	
	}
}
void diem::xuat(int n){
	switch(n){
		case 2:
			cout<<"("<<x<<","<<y<<")"<<endl;
			break;
		case 3:
			cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
			break;	
	}
}
int main(){
	int n;
	diem a,b;
	cout<<"nhap vao khong gian:";
	cin>>n;
	a.nhap(n);
	b.nhap(n);
	cout<<"hai diem vua nhap la:"<<endl;
	a.xuat(n);
	b.xuat(n);
	cout<<"khoang cach cua hai diem vua nhap la:";
	a.khoangcach(n,b);
	return 0;
}

