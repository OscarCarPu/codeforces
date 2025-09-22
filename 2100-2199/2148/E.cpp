#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> total(n,0);
        vi cnt(n,0);
        vi a(n);
        bool impossible = false;
        for (int i=0;i<n;i++){
            cin>>a[i];
            total[a[i]-1]++;
        }
        for (int i=0;i<n;i++){
            if(total[i]%k){
                impossible = true;
                break;
            }else {
                total[i] /= k;
            }
        }
        if (impossible){
            cout<<"0\n";
            continue;
        }
        int res = 0;
        for(int l=0,r=0;r>=l and r<n;r++){
            cnt[a[r]-1]++;
            while (cnt[a[r]-1] > total[a[r]-1]) {
                cnt[a[l]-1]--;
                l++;
            }
            res += (r-l+1);
        }
        cout<<res<<"\n";
    }
}
