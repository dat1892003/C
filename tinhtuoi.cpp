#include <bits/stdc++.h>
using namespace std;
int main(){
	int y,m,d,n;
	cin>>n;
	if(n<1||n>1000000000)
	return 0;
	y=n/365;
	n=n%365;
	m=n/30;
	n=n%30;
	d=n;
	if(y!=0)
		cout<<y<<" Years"<<endl;
	if(m!=0)
		cout<<m<<" Months"<<endl;
	if(d!=0)
		cout<<d<<" Days"<<endl;
	return 0;
}
