#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class ham{
	public:
		void giaipt(float,float);
		void giaipt(float,float,float);
};
void ham::giaipt(float a,float b){
	if(a==0) cout<<"phuong trinh vo nghiem"<<endl;
	else cout<<"phuong trinh co nghiem la:"<<fixed<<setprecision(3)<<-(b/a)<<endl;
}
void ham::giaipt(float a, float b, float c){
	if(a==0) giaipt(b,c);
	if(a!=0){
	float d=b*b-4*a*c;
	if (d<0) cout<<"pt vo nghiem"<<endl;
	if(d==0) cout<<"pt co nghiem kep x1=x2="<<fixed<<setprecision(3)<<-b/2*a;
	if(d>0) cout<<"pt co 2 nghiem la"<<fixed<<setprecision(3)<<-b+sqrt(d)/(2*a)<<" va "<<fixed<<setprecision(3)<<b+sqrt(d)/(2*a);
	}
}
int main(){
	float a,b,c;
	int n;
	ham luachon;
	cout<<"cac lua chon:\n1.giai pt bac nhat\n2.giai pt bac 2\n";
	do{ 
	cout<<"nhap lua chon cua ban:"; 
	cin>>n;
	switch(n){
		case 1: 
			cout<<"nhap vao a va b:";
			cin>>a>>b;
			luachon.giaipt(a,b);
			break;
		case 2:
			cout<<"nhap vao a b c:";
			cin>>a>>b>>c;
			luachon.giaipt(a,b,c);
			break;
		case 3: exit(0);
	}
	}while(0);
	return 0;
}