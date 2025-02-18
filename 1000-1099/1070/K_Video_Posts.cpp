#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%k!=0){
        cout<<"No";
        return 0;
    }
    int aux=sum/k;
    vector<int> sol;
    int auxx=0,cnt=0;
    bool pos=true;
    for(int i=0;i<n;i++){
        auxx+=a[i];
        cnt++;
        if(auxx>aux){
            pos=false;
        }
        if(auxx==aux){
            auxx=0;
            sol.push_back(cnt);
            cnt=0;
        }
    }
    if(pos){
        cout<<"Yes\n";
        for(int i : sol)cout<<i<<" ";
    }
    else cout<<"No";
}