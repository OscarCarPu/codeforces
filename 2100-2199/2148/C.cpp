#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   int T;
	cin >> T;
	while(T--){
		int n, m, x , y;
		cin >> n >> m;
		int px = 0, py = 0;
		int points = 0;
		while(n--){
			cin>>x>>y;
			int dist = x-px;
			if(abs(y-py)%2!=(x-px)%2)points--;
			points += dist;
			px = x;
			py = y;
		}
		points += (m-px);
		cout << points << endl;
	}
}
