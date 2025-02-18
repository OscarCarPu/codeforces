#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<bool>>B(n,vector<bool>(m,false));
    int last=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char e;
            cin>>e;
            if(e=='*')B[i][j]=true,last++;
        }
    }
    int sol=last+1;
    for(int x=0;x<=last;x++){
        int i=x/n;
        int j=x%n;
        if(B[j][i])sol--;
    }
    while(q--){
        int i,j;
        cin>>i>>j;
        i--;
        j--;
        int x=j*n+i;
        if(B[i][j]==false){
            last++;
            if(x<=last){
                if(B[last%n][last/n]){
                    sol--;
                }
            }
            else{
                if(B[last%n][last/n]==false){
                    sol++;
                }
            }
            B[i][j]=true;
        }
        else{
            if(x<last){
                if(B[last%n][last/n]){
                    sol++;
                }
            }
            else{
                if(B[last%n][last/n]==false){
                    sol--;
                }
            }
            last--;
            B[i][j]=false;
        }
        cout<<sol<<"\n";
    }
}