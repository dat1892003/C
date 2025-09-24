#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
unsigned long long s=1;
	cin>>n;
	if(n>30 || n<-1)
	return 0;
	
	while(n>0){
		s=s*n;
		n=n-2;
	}
	cout<<s;
	return 0;
}
