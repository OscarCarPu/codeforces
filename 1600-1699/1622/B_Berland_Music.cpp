#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
struct song{
    int orden;
    bool better;
};
bool func(song a,song b){
    if(a.better and b.better){
        return a.orden>b.orden;
    }
    if(a.better)return true;
    if(b.better)return false;
    return a.orden>b.orden;
}
bool func2(pi a,pi b){
    return a.first>b.first;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<song>V(n);
        map<int,int> inicial;
        for(int i=0;i<n;i++){
            cin>>V[i].orden;
            inicial[V[i].orden]=i;
        }
        for(int i=0;i<n;i++){
            char e;
            cin>>e;
            if(e=='1'){
                V[i].better=true;
            }
            else{
                V[i].better=false;
            }
        }
        sort(V.begin(),V.end(),func);
        vi sol(n);
        int a=n;
        for(song i : V){
            sol[inicial[i.orden]]=a;
            a--;
        }
        for(int i : sol)cout<<i<<" ";
        cout<<"\n";
    }
}