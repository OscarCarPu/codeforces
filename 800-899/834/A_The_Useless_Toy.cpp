#include <bits/stdc++.h>
using namespace std;
map<char,int> M={{'^',0},{'<',3},{'>',1},{'v',2}};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char e;
    cin>>e;
    char ee;
    cin>>ee;
    int n;
    cin>>n;
    if(n%2==0)cout<<"undefined";
    else{
        int sol=(M[ee]-M[e])%4;
        if(sol<0)sol+=4;
        if(n%4==sol)cout<<"cw";
        else cout<<"ccw";
    }
}