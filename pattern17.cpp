#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        char ch = 'A';
        for(int j = 0; j <= i; j++){
            cout << ch;
            ch++;
        }
        ch -= 2;
        for(int j = 0; j < i; j++){
            cout << ch;
            ch--;
        }
        cout<<endl;
    }
    return 0;
}

