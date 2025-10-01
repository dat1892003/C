#include<iostream>
using namespace std;
class ngay{
	private:
		int d,m,y;
	public:
		void nhap();
		void xuat();
		int kt_thang();
		int kt_nam();
		ngay tang_1_ngay(int);
};
void ngay::nhap(){
	cin>>d>>m>>y;	
	while(y<=0||m<=0||m>12||d<=0){
		cout<<"ngay da nhap khong hop le vui long nhap lai:";
		cin>>d>>m>>y;
	}
	cout<<"ngay da nhap vao hop le"<<endl;
}
void ngay::xuat(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}
int ngay::kt_nam(){
	if((y%4==0 && y%100!=0) || (y%400==0))
		return 1;
	else return 0;
}
int ngay::kt_thang(){
	int d1;
	switch (m){
    	case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d1= 31;
            break;
        case 2:
            if (kt_nam()==1)
                    d1= 29;
                else 
                    d1= 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                d1=30;
                break;
  }
  return d1;
}
ngay ngay::tang_1_ngay(int dmax){
	if(++d>dmax){
		d=1;
		if(++m>12){
		m=1;
		y=y+1;}
	}
	return *this;
}
int main(){
	int dmax,n;
	ngay a,b;
	cout<<"nhap vao mot ngay:";
	a.nhap();
	b=a;
	cout<<"ngay da nhap vao la:";
	a.xuat();
	dmax=a.kt_thang();
	a.tang_1_ngay(dmax);
	cout<<"ngay tiep theo la:";
	a.xuat();
	cout<<"nhap vao so ngay can tang len:";
	cin>>n;
	for(int i=0;i<n;i++){
	dmax=b.kt_thang();
	b.tang_1_ngay(dmax);	
	}
	cout<<"ngay sau khi tang len "<<n<<" ngay la:";
	b.xuat();
	return 0;
}