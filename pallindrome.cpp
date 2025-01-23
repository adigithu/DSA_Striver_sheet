#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int org=n;
	int revNum=0;
	while(n>0){
		int ld=n%10;
		revNum=(revNum*10)+ld;
		n=n/10;
	}
	if(org==revNum){
		cout<<org<<" is a pallindrome number"<<endl;
	}
	else{
		cout<<org<<" is not an pallindrome number"<<endl;
	}
	return 0;
}
