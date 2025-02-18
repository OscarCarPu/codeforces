#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	int n, m, k;
	cin>>n>>m>>k;
    vector<int>V(m+1);
	for(int i=0; i <= m; ++i){
		cin>>V[i];
	}
	int ans=0;
	for(int i=0; i < m; ++i){
		if(__builtin_popcount(V[i]^V[m]) <= k)
			ans++;
	}
	cout<<ans;
}