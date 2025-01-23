#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int cnt=0;
	while(n>0){
		int ld=n%10;
		cnt=cnt+1;
		n=n/10;
	}
	cout<<"The number of digits in the given number is "<<cnt<<endl;
	return 0;
}
