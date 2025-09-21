#include<iostream>
using namespace std;
class xe{
	private:
		char ms[25],tentx[25],soxe[25],so[25];
		float km,tien;
	public:
		void nhap();
		void xuat();
		float get_tien(){
			return tien;
		}
};
void xe::nhap(){
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
cin.get(so,25);
cin.ignore();
cout<<"nhap so km di dc:";
cin>>km;
cout<<"nhap doanh thu:";
cin>>tien;
cin.ignore();	
}
void xe::xuat(){
	cout<<ms<<"\t"<<tentx<<"\t"<<soxe<<"\t"<<so<<"\t"<<km<<"\t"<<tien<<endl;
}
int main(){
	int i,n,m;
	float s;
	xe noi[50],ngoai[50];
	cout<<"nhap so chuyen xe noi thanh:";
	cin>>n; cin.ignore();
	for (i = 0;i<n;i++){
	cout<<"nhap thong tin cua chuyen xe noi thanh"<<i+1<<":"<<endl;
	noi[i].nhap();}
	cout<<"nhap so chuyen xe ngoai thanh:";
	cin>>m; cin.ignore();
	for (i = 0;i<m;i++){
	cout<<"nhap thong tin cua chuyen xe ngoai thanh"<<i+1<<":"<<endl;
	ngoai[i].nhap();}
	cout<<"danh sach xe noi thanh vua nhap la:"<<endl;
	for (i = 0;i<n;i++){noi[i].xuat();}
	cout<<"tong doanh thu cua xe noi thanh la:";
	for (i = 0,s=0;i<n;i++) {s += noi[i].get_tien();}
	cout<<s<<endl;
	cout<<"danh sach xe ngoai thanh vua nhap la:"<<endl;
	for (i = 0;i<m;i++){ngoai[i].xuat();}
	cout<<"tong doanh thu cua xe ngoai thanh la:";
	for (i = 0,s=0;i<m;i++) {s += ngoai[i].get_tien();}
	cout<<s<<endl;
	return 0;
}