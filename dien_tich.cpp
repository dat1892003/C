#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class ham{
	public:
		void dientich(float);
		void dientich(float,float);
		void dientich(float,float,float);
};
void ham::dientich(float a){
	float pi=3.14;
	cout<<"dien tich hinh tron la:"<<fixed<<setprecision(3)<<pi*a<<endl;
}
void ham::dientich(float a,float b){
	cout<<"dien tich hinh chu nhat la:"<<fixed<<setprecision(3)<<a*b<<endl;
}
void ham::dientich(float a,float b,float c){
	if (a+b<=c||a+c<=b||b+c<=a) cout<<"tam giac khong ton tai"<<endl;
	else{
	float h=(a+b+c)/2;
	cout<<"dien tich hinh tam giac la:"<<fixed<<setprecision(3)<<sqrt(h*(h-a)*(h-b)*(h-c))<<endl;}
	
}
int main(){
	float a,b,c;
	int n;
	ham luachon;
	cout<<"cac lua chon:\n1.dien tich hinh tron\n2.dien tich hinh chu nhat\n3.dien tich hinh tam giac\n";
do{
	cout<<"nhap vao lua chon cua ban:";
	cin>>n;
	switch(n){
		case 1:
			cout<<"nhap vao ban kinh duong tron:"<<endl;
			cin>>a;
			luachon.dientich(a);
			break;
		case 2:
			cout<<"nhap chieu dai 2 canh cua hinh chu nhat:"<<endl;
			cin>>a>>b;
			luachon.dientich(a,b);
			break;
		case 3:
			cout<<"nhap ba canh hinh tam giac:"<<endl;
			cin>>a>>b>>c;
			luachon.dientich(a,b,c);
			break;
		case 4: exit(0);
	}
	} while(1);
return 0;
}