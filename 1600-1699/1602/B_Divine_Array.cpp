#include <bits/stdc++.h>
using namespace std;
#define int long long 
int A[2001][2001];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>A[0][i];
        }
        int p=0;
        int nn=n;
        while(nn--){
            map<int,int> M;
            for(int i=0;i<n;i++){
                M[A[p][i]]++;
            }
            p++;
            for(int i=0;i<n;i++){
                A[p][i]=M[A[p-1][i]];
            }
        }
        int q;
        cin>>q;
        while(q--){
            int x,k;
            cin>>x>>k;
            k=min(k,n);
            cout<<A[k][x-1]<<"\n";
        }
    }
}
