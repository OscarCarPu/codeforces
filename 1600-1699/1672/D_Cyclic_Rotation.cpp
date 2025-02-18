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
        vector<int> a(n),b(n),cnt(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool pos=true;
        int i=0,j=0;
        while(j<n){
            if(i<n and j<n and a[i]==b[j]){
                i++;
                j++;
                continue;
            }
            if(cnt[b[j]]>0 and b[j]==b[j-1]){
                cnt[b[j++]]--;
            }
            else if(i<n){
                cnt[a[i++]]++;
            }
            else{
                pos=false;
                break;
            }
        }
        if(pos)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
