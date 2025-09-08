#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *trai,*phai;
};
	typedef node* dscay;
	dscay cay1;
node* taonode(int a){
	node *p=new(node);
	p->data=a;
	p->phai=NULL;
	p->trai=NULL;
	return p;
}
node* timnode(dscay a,int c){
	if(a==NULL) return NULL;
	if(a->data==c) return a;
	if(a->data>c) timnode(a->trai,c);
	else timnode(a->phai,c);
}
void in(dscay a){
	if(a==NULL) return;
		cout<<a->data<<"\t";
	in(a->trai); 
	in(a->phai);
}
void themnode(dscay &a, node *p){
	if(a==NULL){
		a=p;
	}
	if(p->data==a->data)
		return;
	if(a->data>p->data)
		themnode(a->trai,p);
	else themnode(a->phai,p);
}
void khoitao(dscay &a){
	node *x=taonode(25);
		themnode(a,x);
	node *y=taonode(20);
		themnode(a,y);
	node *z=taonode(36);
		themnode(a,z);
	node *g=taonode(8);
		themnode(a,g);
	node *h=taonode(23);
		themnode(a,h);
	node *f=taonode(34);
		themnode(a,f);
	node *j=taonode(42);
		themnode(a,j);
	node *c=taonode(5);
		themnode(a,c);
}
void nodethemang(dscay &t,dscay &a){
	if(a->phai!=NULL)
		nodethemang(t,a->phai);
	else{
		t->data=a->data;
		t=a;
		a=a->trai;
	}
}
void xoanode(dscay &a,int x){
	if(a==NULL) return;
	if(a->data>x)
		xoanode(a->trai,x);
	else if(a->data<x)
		xoanode(a->phai,x);
	else{
		node *t=a;
		if(a->phai==NULL)
			a=a->trai;
		else if(a->trai==NULL)
			a=a->phai;
		else nodethemang(t,a->trai);
		delete t;
	}
}

int tinhtong(dscay a){
	if(a!=NULL){
		int b=tinhtong(a->trai);
		int c=tinhtong(a->phai);
		return a->data+b+c;
	}
	return 0;
}
int main(){
	khoitao(cay1);
	cout<<"in cay nhi phan tim kiem ban dau:";
	in(cay1);
	cout<<endl;
	int c=3;
	cout<<"tim node co gia tri la "<<c<<":";
	if(timnode(cay1,c)==NULL)
		cout<<"Khong co node can tim"<<endl;
	else cout<<timnode(cay1,c)<<endl;
	node *b=taonode(3);
	cout<<"them node co gia tri la "<<b->data<<": ";
	themnode(cay1,b);
	in(cay1);
	cout<<endl;
	cout<<"xoa node co gia tri la :";
	xoanode(cay1,20);
	in(cay1);
	cout<<endl;
	cout<<"tong cua cay nhi phan la:"<<tinhtong(cay1);
	return 0;
}
