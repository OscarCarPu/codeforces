#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n=6;
    vector<int>V(6);
    int sum=0;
    for(int i=0;i<n;i++)cin>>V[i],sum+=V[i];
    sort(V.begin(),V.end());
    if(sum%2){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int l=j+1;l<6;l++){
                if(i==j or i==l or j==l)continue;
                if(V[i]+V[j]+V[l]==sum/2){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}