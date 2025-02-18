#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int sol=0;
    int c=0;
    char e='+';
    vector<int> C(40,0);
    for(int i=0;i<n;i++){
        if(s[i]==e){
            c++;
            if(c==k){
                c=0;
                C[e-'a']++;
            }
        }
        else{
            e=s[i];
            c=1;
            if(c==k){
                c=0;
                C[e-'a']++;
            }
        }
    }
    for(int i=0;i<40;i++){
        sol=max(sol,C[i]);
    }
    cout<<sol;
}