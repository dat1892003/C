#include<iostream>
using namespace std;
class xe_noi{
	private:
		char ms[25],tentx[25],soxe[25],sotuyen[25];
		float km,tien;
	public:
		void nhap();
		void xuat();
		void hoandoi(xe_noi);
		float get(){
			return tien;
		}
		
};
class xe_ngoai{
	private:
		char ms[25],tentx[25],soxe[25],noiden[25];
		float songaydi,tien;
	public:
		void nhap();
		void xuat();
		void hoandoi(xe_ngoai);
		float get(){
			return tien;
		}
};
void xe_noi::nhap(){
cout<<"nhap ma so chuyen:";
cin.get(ms,25);
cin.ignore();
cout<<"nhap ten tai xe:";
cin.get(tentx,25);
cin.ignore();
cout<<"nhap so xe:";
cin.get(soxe,25);
cin.ignore();
cout<<"nhap so tuyen:";
cin.get(sotuyen,25);
cin.ignore();
cout<<"nhap so km di dc:";
cin>>km;
cout<<"nhap doanh thu:";
cin>>tien;
cin.ignore();
}
void xe_noi::xuat(){
	cout<<ms<<"\t"<<tentx<<"\t"<<soxe<<"\t"<<sotuyen<<"\t"<<km<<"\t"<<tien<<endl;
}
void xe_ngoai::nhap(){
cout<<"nhap ma so chuyen:";
cin.get(ms,25);
cin.ignore();
cout<<"nhap ten tai xe:";
cin.get(tentx,25);
cin.ignore();
cout<<"nhap so xe:";
cin.get(soxe,25);
cin.ignore();
cout<<"nhap noi den:";
cin.get(noiden,25);
cin.ignore();
cout<<"nhap so ngay di dc:";
cin>>songaydi;
cout<<"nhap doanh thu:";
cin>>tien;
cin.ignore();	
}
void xe_ngoai::xuat(){
	cout<<ms<<"\t"<<tentx<<"\t"<<soxe<<"\t"<<noiden<<"\t"<<songaydi<<"\t"<<tien<<endl;
}
int main(){
	xe_noi a[50];
	xe_ngoai b[50];
	int i,n,m;
	float s;
	cout<<"nhap so chuyen xe noi thanh:";
	cin>>n; cin.ignore();
	for (i = 0;i<n;i++){
	cout<<"nhap thong tin cua chuyen xe noi thanh"<<i+1<<":"<<endl;
	a[i].nhap();}
	cout<<"nhap so chuyen xe ngoai thanh:";
	cin>>m; cin.ignore();
	for (i = 0;i<m;i++){
	cout<<"nhap thong tin cua chuyen xe ngoai thanh"<<i+1<<":"<<endl;
	b[i].nhap();}
	cout<<"danh sach xe noi thanh vua nhap la:"<<endl;
	for (i = 0;i<n;i++){a[i].xuat();}
	cout<<"danh thu cua xe noi thanh la:"<<endl;
	for (s=0,i = 0;i<n;i++){s+=a[i].get();}
	cout<<s<<endl;
	cout<<"danh sach xe ngoai thanh vua nhap la:"<<endl;
	for (i = 0;i<m;i++){b[i].xuat();}
	cout<<"danh thu cua xe ngoai thanh la:"<<endl;
	for (s=0,i = 0;i<m;i++){s+=b[i].get();}
	cout<<s<<endl;
	return 0;
}