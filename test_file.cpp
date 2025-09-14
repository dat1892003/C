	//app che do them ghi bo sung vao cuoi file
	//in mo file de doc
	//out mo file de ghi
	//ate mo file cho out put va di chuyen den cuoi file
	//trunc mo file neu co noi dung san se xoa nd cua file trc khi mo
#include <bits/stdc++.h>
using namespace std;
int main(){
	ofstream a("sv.txt",ios::app);
	a<<"con me no"<<endl;
	a.close();
	ifstream f("sv.txt");
	while(!f.eof()){
		string x;
		getline(f,x);
		cout<<x<<endl;
	}
	string s="5";
	int x=0;
	stringstream c(s);
	c>>x;
	cout<<x+1;
	f.close();
	return 0;
}
