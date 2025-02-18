#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int cnt = 0;
	int ans = 0;
    string s;
	while (getline(cin,s)){
		int n=s.length();
		if (s[0]=='+') cnt++;
		else if (s[0]=='-') cnt--;
		else{
			for(int i=0;i<n;i++){
				if (s[i] == ':'){
					ans += cnt * (n - i - 1);
					break;
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}
