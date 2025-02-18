#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k;
	k=4+n*3;
	cout<<k<<"\n";
	cout<<0<<" "<<0<<"\n";
	for(int a=0;a<=n;a++){
		cout<<a<<" "<<(a+1)<<"\n";
		cout<<(a+1)<<" "<<a<<"\n";
		cout<<(a+1)<<" "<<(a+1)<<"\n";
	}
	return 0;
}