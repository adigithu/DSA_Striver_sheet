#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int count=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			count++;
			if((n/i)!=i){
				count++;
			}
		}
	}
	if(count==2){
		cout<<n<<" is a prime number"<<endl;
	}
	else{
		cout<<n<<" is not a prime number"<<endl;
	}
	return 0;
}
