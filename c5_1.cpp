#include<iostream>
#include<string>
using namespace std;
class phong{
	protected:
	string loaiphong;
	int songay,dichvu;
	public:
	void nhap(){
		cout<<"nhap vao loai phong:";
		getline(cin,loaiphong);
		cout<<"nhap vao so ngay thue:";
		cin>>songay;
		cin.ignore();
		if(loaiphong=="A"){
			cout<<"nhap tien dich vu:";
			cin>>dichvu;
			cin.ignore();
		}
		else dichvu=0;
	}
};
class thue:public phong{
	protected:
	int tien=0;
	public:
		void tong(){
		if(loaiphong=="A"){
		tien=tien+dichvu+songay*80;
		}	
		else if(loaiphong=="B"){
		tien=tien+songay*60;
		}
		else if(loaiphong=="C"){
		tien=tien+songay*40;
		}
		if((loaiphong=="A" or loaiphong=="B") and songay>5){
		tien=tien-(tien*10/100);
		}
		}
	void xuat(){
		cout<<loaiphong<<"\t"<<songay<<"\t"<<dichvu<<"\t"<<tien<<endl;
	}
};
int main(){
	thue a[50];
	int i,n;
	cout<<"nhap vao so phong thue:";
	cin>>n;
	cin.ignore();
	for(i=0;i<n;i++){
		a[i].nhap();
		a[i].tong();
	}
	cout<<"danh sach phong la:"<<endl;
		for(i=0;i<n;i++){
		a[i].xuat();
	}
	return 0;
}

