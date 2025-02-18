#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int last=-1;
        int k,n;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0;
        int bef=-1;
        int st=n;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                last=i;
                st=i;
                c++;
                break;
            }
        }
        for(int i=st+1;i<n;i++){
            if(s[i]=='*'){
                if(i-last>k){
                    last=bef;
                    c++;
                }
                bef=i;
            }
        }
        if(bef!=-1)c++;
        cout<<c<<"\n";
    }
}