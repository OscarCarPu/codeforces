#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>m>>n;
        vector<vector<int>> V(m,vector<int>(n));
        int mi=LLONG_MAX;
        int M=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>V[i][j];
                mi=min(V[i][j],mi);
                M=max(M,V[i][j]);
            }
        }
        int high=M;
        int low=mi;
        int res=mi;
        
        while(high>=low){
            int mid=(high+low)/2;
            bool pos=false;
            vector<bool>B(n,false);
            for(int i=0;i<m;i++){
                int cnt=0;
                for(int j=0;j<n;j++){
                    if(V[i][j]>=mid){
                        cnt++;
                        B[j]=true;
                    }
                }
                if(cnt>=2)pos=true;
            }
            for(int i=0;i<n;i++)pos=pos and B[i];
            if(pos){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<res<<"\n";
    }
}