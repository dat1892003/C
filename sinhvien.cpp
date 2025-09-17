#include <iostream>
using namespace std;
struct SinhVien{
	char masv[25];
	char hoten[25];
	float diemtb;
};
void NhapSv(SinhVien sv[],int n){
	for(int i=0;i<n;i++){
	cin.ignore();
	cout<<"nhap ho ten sv"<<i+1<<":";
	cin.get(sv[i].hoten,25);
	cin.ignore();
	cout<<"nhap masv:";
	cin.get(sv[i].masv,25);
	cin.ignore();
	cout<<"nhap diem trung binh:";
	cin>>sv[i].diemtb;
	} 
}
void XuatSv(SinhVien sv[],int n){
	cout<<"ds sau sap xep la:\n";
	cout<<"ten"<<"\t"<<"masv"<<"\t"<<"diemtb"<<"\n";
	for(int i=0;i<n;i++)
	cout<<sv[i].hoten<<"\t"<<sv[i].masv<<"\t"<<sv[i].diemtb<<endl;
}
void SapXep(SinhVien sv[],int n){
for (int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
		if (sv[i].diemtb>sv[j].diemtb){
			SinhVien tam=sv[i];
			sv[i]=sv[j];
			sv[j]=tam;}
}
int main(){
  SinhVien *sv;
  int n;
  cout<<("Nhap so Sinh vien: ");
  cin>>n;
  sv=new SinhVien[n];
  if(sv==NULL){
  	cout<<"\nLoi cap phat bo nho";
  	exit(1);
  }
  NhapSv(sv,n);
  SapXep(sv,n);
  XuatSv(sv,n);
  delete sv;
  return 0;
}