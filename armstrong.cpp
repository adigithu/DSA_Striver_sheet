#include<iostream>
using namespace std;
int main(){
	int n,ld;
	cout<<"Enter the input number:";
	cin>>n;
	int dup=n;
	int sum=0;
	while(n>0){
		ld=n%10;
		sum=sum+(ld*ld*ld);
		n=n/10;
	}
	if(dup==sum){
		cout<<dup<<" is an Armstrong number"<<endl;;
	}
	else{
		cout<<dup<<" is not an Armstrong number"<<endl;
	}
	return 0;
}
