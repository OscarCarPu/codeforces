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
        vector<int> V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        vector<vector<bool>> can(n,vector<bool>(n,false));
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                can[i][j]=true;
            }
        }
        for(int k=2;k<n;k+=2){
            for(int i=0;i<=n-k;i++){
                if(k==2){
                    can[i][i+k-1]=(V[i]!=V[i+1]);
                }
                else{
                    can[i][i+k-1]=(can[i+1][i+k-2] and V[i]!=V[i+k-1]) or (can[i][i+k-3] and can[i+k-2][i+k-1]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //cout<<i<<" "<<j<<" "<<can[i][j]<<endl;
            }
        }
        vector<int> sol(n+1,0);
        for(int i=0;i<n;i++){
            if(!(sol[i]!=0 or i==0 or can[0][i-1]))continue;
            for(int j=i+1;j<n;j++){
                if(V[i]==V[j] and can[i+1][j-1]){
                     sol[j]=max(sol[j],sol[i]+1);
                }
            }
            if(i==n-1 or can[i+1][n-1]){
                sol[n]=max(sol[n],sol[i]+1);
            }
        }
        vector<int> rsol(n+1,0);
        for(int i=n-1;i>=0;i--){
            if(!(rsol[i]!=0 or i==n-1 or can[i+1][n-1]))continue;
            for(int j=i-1;j>=0;j--){
                if(V[i]==V[j] and can[j+1][i-1]){
                    rsol[j]=max(rsol[j],rsol[i]+1);
                }
            }
            if(i==0 or can[0][i-1]){
                rsol[n]=max(rsol[n],rsol[i]+1);
            }
        }
        sol[n]=max(sol[n],rsol[n]);
        cout<<sol[n]<<"\n";
    }
}