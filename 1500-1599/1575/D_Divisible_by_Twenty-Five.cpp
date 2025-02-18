#include <bits/stdc++.h>
using namespace std;
#define int long long
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a,p/2)*((p%2)?a:1);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int opt=0;
    bool xcap=false;
    int n=s.length();
    for(int i=poW(10,n-1);i<poW(10,n);i+=25){
        if(i==1)i=0;
        if(i==10)i=25;
        string t=to_string(i);
        char aux='<';
        bool pos=true;
        for(int j=0;j<n;j++){
            if(s[j]=='_')continue;
            else if(s[j]=='X'){
                if(aux=='<'){
                    aux=t[j];
                }
                else{
                    if(aux!=t[j])pos=false;
                }
            }
            else if(s[j]!=t[j])pos=false;
        }
        if(pos)opt++;
    }
    cout<<opt;
}