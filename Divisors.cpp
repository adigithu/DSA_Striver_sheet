#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
	vector<int> ls;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			ls.push_back(i);
			if((n/i)!=i){
				ls.push_back(n/i);
			}
		}
	}
	sort(ls.begin(),ls.end());
	cout<<"The divisors of "<<n<<" are ";
	for(auto it:ls){
		cout<<it<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	printDivisors(n);
	return 0;
}
