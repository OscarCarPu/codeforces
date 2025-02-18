#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> V(n,vector<int>(m));
    int ma=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>V[i][j],ma=max(ma,V[i][j]);
    }
    int res=0;
    int high=ma,low=0;
    int res1=1,res2=1;
    while(high>low){
        int mid=(high+low)/2;
        map<int,int> M;
        vector<int> aux;
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<m;j++){
                if(V[i][j]>mid){
                    a+=(1LL<<j);
                }
            }
            if(!M.count(a)){
                M[a]=i+1;
                aux.push_back(a);
            }
        }
        bool done=false;
        for(int i=0;i<aux.size();i++){
            for(int j=i;j<aux.size();j++){
                if((aux[i]|aux[j])==(1LL<<m)-1){
                    res1=M[aux[i]];
                    res2=M[aux[j]];
                    res=mid;
                    low=mid+1;
                    done=true;
                    j=aux.size();
                    i=aux.size();
                }
            }
        }
        if(!done){
            high=mid-1;
        }
    }
    cout<<res1<<" "<<res2;
}