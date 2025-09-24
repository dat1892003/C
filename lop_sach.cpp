#include<iostream>
using namespace std;
class sach{
private:

char masach[10], tensach[30],tacgia[20];
int sl;

public:

void nhap(); 


void xuat(); 

};
void sach::nhap()
{
cout<<"\n Nhap ma sach :"; 
cin.get(masach,10);
cin.ignore();
cout<<"\n Nhap ten tac sach :";
cin.get(tensach,30);
cin.ignore();
cout<<"\n Nhap ten tac gia :";
cin.get(tacgia,20);
cin.ignore();
cout<<"\n nhap so luong : ";
cin>>sl;
cin.ignore();
}
void sach::xuat()
{
cout<<masach<<"\t"<<tensach<<"\t"<<tacgia<<"\t"<<sl<<endl; 
}
int main(){ 
sach book[50];
int i,n;
cout<<"\n Nhap so sach :";
cin>>n; 
cin.ignore();
for (i = 0;i<n;i++)
book[i].nhap(); 
cout<<"\nDanh sach la:"<<endl;
cout<<"ma"<<"\t"<<"ten"<<"\t"<<"tg"<<"\t"<<"sl"<<endl; 
for (i=0; i<n ; i++)
book[i].xuat();
return 0;
}
