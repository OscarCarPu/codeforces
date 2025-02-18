#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=360;
const int MAXN=1e5+1;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> p;
    vector<bool> B(MAXN+1,true);
    B[0]=B[1]=false;
    for(int i=2;i*i<=MAXN;i++){
        if(B[i]){
            p.push_back(i);
            for(int j=i*2;j<=MAXN;j+=i){
                B[j]=false;
            }
        }
    }
    map<set<pair<int,int>>,int> M;
    vector<set<pair<int,int>>> V(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        set<pair<int,int>> aux;
        for(int j : p){
            int cnt=0;
            while(x%j==0){
                x/=j;
                cnt++;
            }
            cnt%=k;
            if(cnt!=0)aux.insert({j,cnt});
        }
        if(x>1)aux.insert({x,1});
        M[aux]++;
        V[i]=aux;
    }
    int sol=0;
    for(int i=0;i<n;i++){
        set<pair<int,int>> aux;
        for(auto u : V[i]){
            aux.insert({u.first,k-u.second});
        }
        M[V[i]]--;
        sol+=M[aux];
    }
    cout<<sol;
}