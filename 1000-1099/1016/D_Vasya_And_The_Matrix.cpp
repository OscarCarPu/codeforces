#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int r[n],c[m];
	int cur=0;
    for(int i=0;i<n;i++)cin>>r[i];
    for(int i=0;i<m;i++)cin>>c[i];
	int pos=0;
	for(int i=0;i<n;i++){
		pos^=r[i];
	}
	for(int i=0;i<m;i++){
		pos^=c[i];
	}
	if(pos!=0){
		cout<<"NO";
		return 0;
	}
	cur=r[0];
	cout<<"YES\n";
	for(int i=1;i<m;i++)cur^=c[i];
	cout<<cur<<" ";
	for(int i=1;i<m;i++)cout<<c[i]<<" ";
	cout<<endl;
	for(int i=1;i<n;i++){
		cout<<r[i]<<" ";
		for(int i=1;i<m;i++)cout<<"0 ";
		cout<<endl;
	}

}