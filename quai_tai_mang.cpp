#include<iostream>
using namespace std;
class mang{
	private:
		int x[50];
	public:
		void nhap(int n);
		void xuat(int n);
		void operator==(mang);
		void operator!=(mang);
		mang operator+(mang b);
		mang operator-(mang);
};
void mang::nhap(int n){
	for(int i=0;i<n;i++)
	cin>>x[i];
}
mang mang::operator+(mang b){
	mang c;
	int n=sizeof(x)/4;
	for (int i=0;i<n;i++){
		c.x[i]=c.x[i]+x[i];
	}
	n=sizeof(x)/4;
	for (int i=0;i<n;i++){
		c.x[i]=c.x[i]+b.x[i];
	}
	return c;
}
void mang::xuat(int n){
	for(int i=0;i<n;i++)
	cout<<x[i]<<"\t";
	cout<<endl;
}
int main(){
	mang a,b,c;
	int n,i,m,max;
	cout<<"nhap so luong phan tu cua mang 1:";
	cin>>n;
	cout<<"nhap vao mang 1:"<<endl;
	a.nhap(n);
	cout<<"nhap so luong phan tu cua mang 2:";
	cin>>m;	
	cout<<"nhap vao mang 2:"<<endl;
	b.nhap(m);
	cout<<"hai mang vua nhap la:"<<endl;
	a.xuat(n);
	b.xuat(m);
	cout<<endl;
	max=m;
	if (max<n) max=n;
	cout<<"tong cua hai mang la:"<<endl;
	c=a+b;
	c.xuat(max);
	return 0;
}

