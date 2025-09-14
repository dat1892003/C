#include<bits/stdc++.h>
using namespace std;
void hoanvi(int &a,int &b){
	int tam = a;
	a=b;
	b=tam;
}
void vundinh(int a[],int n,int i){
	int max=i;
	int phai= 2*i+2;
	int trai=2*i+1;
	if(trai<n && a[max]<a[trai])
		max=trai;
	if(phai<n && a[max]<a[phai])
		max=phai;
	if(max!=i){
		hoanvi(a[max],a[i]);
		vundinh(a,n,max);
	}	
}
void sortheap(int a[],int n){
	for(int i=n/2-1;i>=0;i--)
		vundinh(a,n,i);
	for(int i=n-1;i>=0;i--){
		hoanvi(a[0],a[i]);
		vundinh(a,i,0);
	}
}
void inmang(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
int main(){
	int a[6]={7,56,23,67,45,52};
	sortheap(a,6);
	inmang(a,6);
}
