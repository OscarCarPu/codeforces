#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>m>>n;
        vector<char> S(n,'B');
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            int p1=x-1;
            int p2=(n+1-x)-1;
            if(p2<p1)swap(p2,p1);
            if(S[p1]=='A'){
                S[p2]='A';
            }
            else{
                S[p1]='A';
            }
        }
        for(int i=0;i<n;i++)cout<<S[i];
        cout<<endl;
    }
}