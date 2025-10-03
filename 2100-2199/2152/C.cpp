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
        int n,q;
        cin>>n>>q;
        vi a(n),cntz(n,0),cnto(n,0),cntd(n,0),cntsd(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                if(a[i]==a[i-1]){
                    cntd[i]=1;
                    if(cntd[i-1]==0){
                        cntsd[i-1]++;
                    }
                    cntd[i-1]=1;
                }
                cntsd[i]=cntsd[i-1]+cntd[i];
                cntz[i]=cntz[i-1];
                cnto[i]=cnto[i-1];
            }
            if(a[i]==0) cntz[i]++;
            else cnto[i]++;
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;r--;
            int len=r-l+1;
            int cnt0=cntz[r]-(l>0?cntz[l-1]:0);
            int cnt1=cnto[r]-(l>0?cnto[l-1]:0);
            if(cnt0%3!=0 || cnt1%3!=0){
                cout<<"-1\n";
                continue;
            }
            int cntdouble=cntsd[r]-(l>0?cntsd[l-1]:0);
            if(l>0 && a[l-1]==a[l] && l<n-1 && a[l]!=a[l+1]){
                cntdouble--;
            }
            if(r<n-1 && a[r]==a[r+1] && r>0 && a[r]!=a[r-1]){
                cntdouble--;
            }
            if(cntdouble==0){
                cout<<(len/3)+1<<"\n";
            }else{
                cout<<(len/3)<<"\n";
            }

        }
        
    }
}