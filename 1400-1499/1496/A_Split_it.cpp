#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
bool isPalindrome(string s){
    bool aux=true;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1])aux=false;
    }
    return aux;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(2*k!=n and (k==0 or isPalindrome(s.substr(0,k)+s.substr(n-k,k))))cout<<"YES\n";
        else cout<<"NO\n";
    }
}