#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,int> M1,M2;
    set<int> S;
    int p=0;
    S.insert(p);
    M1[p]++;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p^=x;
        S.insert(p);
        if(i%2)M1[p]++;
        else M2[p]++;
    }
    int sol=0;
    for(int i : S){
        if(M1[i]){
            sol+=M1[i]*(M1[i]-1)/2;
        }
        if(M2[i]){
            sol+=M2[i]*(M2[i]-1)/2;
        }
    }
    cout<<sol;
}