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
        vector<int> b(n);
        map<int,int> M;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            while(x%2==0)x/=2;
            M[x]++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b.rbegin(),b.rend());
        bool pos=true;
        for(int i=0;i<n;i++){
            while(b[i]>0){
                if(M.count(b[i]) and M[b[i]]!=0){
                    M[b[i]]--;
                    break;
                }
                b[i]/=2;
            }
            if(b[i]==0){
                pos=false;
            }
        }
        if(pos)cout<<"YES\n";
        else cout<<"NO\n";
    }
}