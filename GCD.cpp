#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
	while(a>0 && b>0){
		if(a>b){
			a=a%b;
		}
		else{
			b=b%a;
		}
	}
	if(a==0){
		return b;
	}
	else{
		return a;
	}
}
int main(){
	int n,n1;
	cout<<"Enter the first number:";
	cin>>n;
	cout<<"Enter the second number:";
	cin>>n1;
	int gcd=GCD(n,n1);
	cout<<"The GCD of "<<n<<" and "<<n1<<" is "<<gcd<<endl;
	return 0;
}
