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
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int sol=0;
    for(int i=0;i<x;i++){
        if(y==i){
            if(s[i]!='1')sol++;
        }
        else{
            if(s[i]!='0')sol++;
        }
    }
    cout<<sol;
}