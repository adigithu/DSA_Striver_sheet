#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=5;j>i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
