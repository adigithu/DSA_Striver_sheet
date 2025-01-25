#include<bits/stdc++.h>
#include<string>
using namespace std;
void func(int i, int n, string name){
	if(i>n){
		return;
	}
	cout<<name<<endl;
	func(i+1,n,name);
}
int main(){
	int n;
	string name;
	cout<<"Enter the number of times you want to print the name:";
	cin>>n;
	cin.ignore();
	cout<<"Enter the name you want to print:";
	getline(cin,name);
	func(1,n,name);
	return 0;
}
