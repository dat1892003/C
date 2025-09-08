#include<bits/stdc++.h>
using namespace std;
struct donvi{
	string ten;
};
void hoanvi(donvi &a,donvi &b){
	donvi tam;
	tam=a;
	a=b;
	b=tam;
}
void in(donvi t[],int n){
	for(int i=0;i<n;i++){
		cout<<t[i].ten<<endl;
	}
}
donvi tim(donvi t[],int n,string a){
	for(int i=0;i<n;i++)
		if(t[i].ten==a)
			return t[i];
}
int main(){
	donvi t[2];
	t[0].ten="Nam";
	t[1].ten="An";
	hoanvi(t[0],t[1]);
	in(t,2);
	donvi a=tim(t,2,"Nam");
	return 0;
}
