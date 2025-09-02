#include<bits/stdc++.h>
using namespace std;
struct so{
	int x;
	so *next;
};
typedef so *dsso;
void them(dsso &t,so* a){
	a->next=t;
	t=a;
}
void in(dsso t){
	for(so*p=t;t!=NULL;p=p->next)
		cout<<p->x<<endl;
}
int main(){
	dsso t=NULL;
	so *a= new so;
	a->x=3;
	a->next=NULL;
	so *b = new so;
	b->x=4;
	b->next=NULL;
	them(t,a);
	them(t,b);
	in(t);
	return 0;
}
