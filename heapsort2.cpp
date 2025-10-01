#include<bits/stdc++.h>
using namespace std;
void hoanvi(int &a,int &b){
	int tam= a;
	a=b;
	b=tam;
}
void vundinh(int a[],int n,int i){
	int max=i;
	int trai=2*i+1;
	int phai=2*i+2;
	if(trai<n && a[max]<a[trai])
		max=trai;
	if(phai<n && a[max]<a[phai]) 
		max=phai;
	if(max!=i){
		hoanvi(a[max],a[i]);
		vundinh(a,n,max);
	}
}
void heap_sort(int a[],int n){
	for(int i=n/2+1;i>=0;i--)
		vundinh(a,n,i);
	for(int i=n-1;i>=0;i--){
		hoanvi(a[i],a[0]);
		vundinh(a,i,0);
	}
}
void quick_sort(int a[],int d,int c){
	if(d>c) return;
	int k=a[d];
	int i=d+1;
	int j=c;
	while(true){
		while(i<=j && a[i]<k) i++;
		while(i<=j && a[j]>k) j--;
		if(i>=j) break;
		hoanvi(a[i],a[j]);
		i++;
		j--;
	}
	hoanvi(a[d],a[j]);
	quick_sort(a,d,j-1);
	quick_sort(a,j+1,c);
}
void inds(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void dem_so_lan(int a[],int n){
	int i=0;
	while(i<n){
		int dem=1;
		if(i==n-1)
		cout<<a[i]<<" xh "<<dem<<endl;
		while(a[i]==a[i+1]){
			dem++;
			i++;
		}
		cout<<a[i]<<" xh "<<dem<<endl;
		i++;
	}
}
int main(){
	int a[]={7,2,76,3,53,26,2,9,21,45,3};
	quick_sort(a,0,10);
	inds(a,11);
	dem_so_lan(a,11);
	return 0;
}

