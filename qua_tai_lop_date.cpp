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
		void operator==(ngay);
		ngay operator+=(int);
		void operator-(ngay);
};
void ngay::operator==(ngay b){
	if(d==b.d && m==b.m && y==b.y) 
		cout<<"hai ngay giong nhau";
	else cout<<"hai ngay khac nhau";
}
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
ngay ngay::operator+=(int n){
	int dmax;
	for(int i=0;i<n;i++){
	dmax=kt_thang();	
	if(++d>dmax){
		d=1;
		if(++m>12){
		m=1;
		y=y+1;}
	}
	}
	return *this;
}
void ngay::operator-(ngay b){
	int dmax;
	int dem=0;
	if(d<b.d or m<b.m or y<b.y){
	while(d!=b.d or m!=b.m or y!=b.y){
	dem=dem+1;
	dmax=kt_thang();	
	if(++d>dmax){
		d=1;
	if(++m>12){
		m=1;
		y=y+1;}
	}}}
	else if(d>b.d or m>b.m or y>b.y){
	while(d!=b.d or m!=b.m or y!=b.y){
	dem=dem+1;
	dmax=b.kt_thang();	
	if(++b.d>dmax){
		b.d=1;
	if(++b.m>12){
		b.m=1;
		b.y=y+1;}
	}}}
	cout<<"khoang cach giua hai ngay la:"<<dem<<"ngay";
}
int main(){
	int n;
	ngay a,b,c;
	cout<<"nhap vao mot ngay:";
	a.nhap();
	cout<<"ngay da nhap vao la:";
	a.xuat();
	cout<<"nhap vao so ngay can tang len:";
	cin>>n;
	cout<<"ngay sau khi tang len "<<n<<" ngay la:";
	a+=n;
	a.xuat();
	cout<<"nhap vao mot ngay:";
	b.nhap();
	cout<<"nhap vao mot ngay:";
	c.nhap();
	b-c;
	return 0;
}