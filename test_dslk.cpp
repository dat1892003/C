#include<iostream>
using namespace std;
struct element{
	int data;
	element *next;
};
typedef element *list;
list first,last;
void khoitao(list &first,list &last){
	first=NULL;
	last=NULL;
}
void them_cuoi(list &first,list &last,int x){
	element *p;
	p=new(element);
	p->data=x;
	p->next=NULL;
	if(first==NULL)
		first=p;
	else last->next=p;
	last=p;
}
void xoa_dau(list &first,list&last){
	if(first->next==NULL){
		first=NULL;
		last=NULL;}
	else if(first==NULL)
		return ;
	else{
		element *p=first;
		first=first->next;
		delete p;
	}
}
void xoa_cuoi(list &first,list&last){
	if(first->next==NULL){
		first=NULL;
		last=NULL;}
	if(first==NULL)
		return ;
	else{
	element *p=first,*q;
	while(p->next!=last){
		p=p->next;}
	q=p->next;
	p->next=NULL;
	last=p;
	delete q;
	}
}
element* timkiem(list first,list last,int k){
	if(first==NULL) return NULL;
	for(element *p=first;p!=NULL;p=p->next)
		if(p->data==k)
			return p;
	return NULL;
}
int main(){
	khoitao(first,last);
	them_cuoi(first,last,5);
	them_cuoi(first,last,3);
	them_cuoi(first,last,4);
	them_cuoi(first,last,5);
	cout<<timkiem(first,last,6);
	element *p;
	p=first;
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
	}
	return 0;
}


