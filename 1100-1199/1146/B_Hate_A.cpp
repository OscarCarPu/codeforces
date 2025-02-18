#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string t;
    cin>>t;
    int cnt=0;
    int n=t.length();
    for(int i=0;i<n;i++){
        cnt+=t[i]=='a';
    }
    if((n-cnt)%2){
        cout<<":(\n";
        return 0;
    }
    string s=t.substr(0,cnt+(n-cnt)/2);
    string w="";
    for(char e : s){
        if(e!='a'){
            w+=e;
        }
    }
    if(s+w==t){
        cout<<s<<"\n";
    }
    else cout<<":(\n";
}