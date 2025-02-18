 #include <bits/stdc++.h>
 using namespace std;
 #define int long long
 signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int>>G(m,{-1,-1});
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        x--;
        if(G[x].second<V[i]){
            G[x].second=V[i];
            G[x].first=i;
        }
        V[i]=x;
    }
    int sol=0;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        x--;
        if(G[V[x]].first!=x)sol++;
    }
    cout<<sol;
 }