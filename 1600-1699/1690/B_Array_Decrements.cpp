#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> V(n);
        for(int i=0;i<n;i++)cin>>V[i].first;
        for(int i=0;i<n;i++)cin>>V[i].second;
        bool can=true;
        int dif=-1;
        int mindif=-1;
        for(int i=0;i<n;i++){
            if(V[i].first<V[i].second){
                can=false;
            }
            else if(V[i].second!=0){
                if(dif==-1)dif=V[i].first-V[i].second;
                else if(V[i].first-V[i].second!=dif)can=false;
            }
            else{
                 mindif=max(mindif,V[i].first);
            }
        }
        if(dif==-1)dif=LLONG_MAX;
        if(mindif>dif)can=false;
        if(can)cout<<"YES\n";
        else cout<<"NO\n";
    }
}