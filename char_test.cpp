#include<bits/stdc++.h>
using namespace std;
bool sosanh(char a[],char b[]){
	if(strcmp(a,b)!=0)
		return false;
	else return true;		
}
int main(){
	char a[]="abcd";
	if(sosanh(a,"abcd"))
		cout<<a;
	return 0;
}
