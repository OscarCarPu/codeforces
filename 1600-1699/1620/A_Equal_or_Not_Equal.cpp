#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cont=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='N')cont++;
        }
        if(cont!=1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}