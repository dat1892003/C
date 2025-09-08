#include<bits/stdc++.h>
using namespace std;
void hoanvi(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void sapxep(int a[],int d, int c)
{	
	if(d>c) return;
	int k= a[d];       
	int i=d+1;
	int j=c;
	while(true){
		while(i<=j && a[i]<=k) i++;
		while(j>=i && a[j]>=k) j--;
		if(i>=j) break;
		hoanvi(a[i],a[j]); 
		i++;
		j--;		
	}
	hoanvi(a[d],a[j]);
	sapxep(a,d,j-1);
	sapxep(a,j+1,c);
}
void hienthi(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void demsolan(int a[],int n){
	int dem=1;
	for(int i=0;i<n;i++){
		if(i==n-1){
			cout<<"so "<<a[i]<<"xuat hien "<<dem<<" lan"<<endl;
		}
		else if(a[i]!=a[i+1]){
			cout<<"so "<<a[i]<<"xuat hien "<<dem<<" lan"<<endl;	
			dem=1;
		}
		else dem++;
	}
}
int main(){
	int a[5]={7,2,1,3,2};
	sapxep(a,0,4);
	hienthi(a,5);
	demsolan(a,5);
	return 0;
}
