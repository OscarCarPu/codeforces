#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int cont=0;
    for(int i=0;i<(int)s.length();i++){
        if(s[i]=='a')cont++;
    }
    if(cont>(int)s.length()/2)cout<<(int)s.length();
    else cout<<(cont*2)-1;
}