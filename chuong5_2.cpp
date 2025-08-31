#include<iostream>
#include<string>
using namespace std;
class thue{
	string hoten;
	protected:
	string loaixe;
	float sogio,gia;
	public:
		void nhap(){
			cout<<"nhap ho ten nguoi thue:";
			getline(cin,hoten);
			cout<<"nhap loai xe thue:";
			getline(cin,loaixe);
			cout<<"nhap so gio thue:";
			cin>>sogio;
			cin.ignore();
		}
		void xuat(){
			cout<<hoten<<"\t"<<loaixe<<"\t"<<sogio<<"\t"<<gia<<endl;
		}
		virtual void tien(){
			if(sogio<1) 
				gia=gia+30000*sogio;
			else gia=gia+30000+((sogio-1)*20000);
			
		}
};
class xemay : public thue{
	string bienso;
	public:
		void nhap_xemay(){
			cout<<"nhap vao bien so xe:";
			getline(cin,bienso);
		}
		void tien(){
			if(loaixe=="100")
				gia=gia+(15000*sogio);	
			else gia=gia+(20000*sogio);	
		}
};
int main(){
	thue a[50],*c;
	xemay b[50];
	int i,n,m;
	cout<<"nhap vao so xe dap:";
	cin>>n;
	cin.ignore();
	for(i=0;i<n;i++){
		c=&a[i];
		c->nhap();
		c->tien();
	}
	cout<<"nhap vao so xe may:";
	cin>>m;
	cin.ignore();
	for(i=0;i<m;i++){
		c=&b[i];
		c->nhap();
		c->tien();
	}
	cout<<"danh sach xe dap vua nhap"<<endl;
	for(i=0;i<n;i++){
		c=&a[i];
		c->xuat();
	}
	cout<<"danh sach xe may vua nhap"<<endl;
	for(i=0;i<n;i++){
		c=&b[i];
		c->xuat();
	}
	return 0;
}