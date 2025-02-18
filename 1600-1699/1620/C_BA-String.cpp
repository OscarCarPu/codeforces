#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        string s;
        cin>>s;
        vector<int> sol;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                if(cnt!=0){
                    sol.push_back(cnt);
                }
                sol.push_back(-1);
                cnt=0;
            }
            else{
                if(cnt==0)cnt=1;
                cnt+=k;
            }
        }
        if(cnt!=0)sol.push_back(cnt);
        x--;
        reverse(sol.begin(),sol.end());
        string ans;
        for(int i : sol){
            if(i==-1)ans.push_back('a');
            else{
                for(int aux=0;aux<x%i;aux++)ans.push_back('b');
                x/=i;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;
        cout<<"\n";
    }
}