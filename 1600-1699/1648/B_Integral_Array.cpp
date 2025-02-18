#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c;
        cin>>c;
        vector<int> sum(c+1),cnt(c+1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        for(int i=1;i<=c;i++){
            sum[i]=sum[i-1]+cnt[i];
        }
        bool done=false;
        for(int y=1;y<=c;y++){
            if(!cnt[y])continue;
            for(int i=1;i*y<=c;i++){
                int r=min(c,i*y+y-1);
                if(sum[r]-sum[i*y-1]>0){
                    if(cnt[i]==0){
                        cout<<"No\n";
                        done=true;
                        break;
                    }
                }
            }
            if(done)break;
        }
        if(!done){
            cout<<"Yes\n";
        }
    }
}