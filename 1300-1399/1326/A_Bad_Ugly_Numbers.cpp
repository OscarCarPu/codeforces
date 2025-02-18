#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<-1<<"\n";
		}
		else{
			cout<<4;
			for(int a=1;a<n;a++){
				cout<<3;
			}
			cout<<"\n";
		}
	}
	return 0;
}