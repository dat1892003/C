#include<bits/stdc++.h>
using namespace std;
void hoanvi(int &a,int &b){
	int tam=a;
	a=b;
	b=tam;
}
void sapxep(int a[],int d,int c){
	if(d>c) return;
	int k=a[d];
	int i=d+1;
	int j=c;
	while(true){
		while(i<=j && a[i]<=k) i++;
		while(i<=j && a[j]>=k) j--;
		if(i>=j) break;
		hoanvi(a[i],a[j]); 
			i++;
			j--;
	}
	hoanvi(a[d],a[j]);
	sapxep(a,d,j-1);
	sapxep(a,j+1,c);
}
void xuat(int a[],int n){
	for(int i = 0; i<n;i++)
	cout<<a[i]<<"\t";
}	
int main(){
	int a[]={72,56,12,8,64,92};
	sapxep(a,0,5);
	xuat(a,6);
	return 0;
}
