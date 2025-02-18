#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int four=0,seven=0;
    for(char e : s){
        if(e=='7')seven++;
        if(e=='4')four++;
    }
    if(four==0 and seven==0)cout<<"-1";
    else if(four>=seven)cout<<"4";
    else cout<<7;
}