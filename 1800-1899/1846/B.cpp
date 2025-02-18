#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vc vector<char>
#define vvc vector<vc>

vvc C;

bool check(char e){
    for(int i=0;i<3;i++){
        int cnt=0;
        for(int j=0;j<3;j++){
            cnt+=C[i][j]==e;
        }
        if(cnt==3) return true;
        cnt=0;
        for(int j=0;j<3;j++){
            cnt+=C[j][i]==e;
        }
        if(cnt==3) return true;
    }
    int cnt=0;
    for(int i=0;i<3;i++){
        cnt+=C[i][i]==e;
    }
    if(cnt==3) return true;
    cnt=0;
    for(int i=0;i<3;i++){
        cnt+=C[i][2-i]==e;
    }
    if(cnt==3) return true;
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        C=vvc(3,vc(3));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)cin>>C[i][j];
        }
        if(check('X'))cout<<"X\n";
        else if(check('O'))cout<<"O\n";
        else if(check('+'))cout<<"+\n";
        else cout<<"DRAW\n";
    }
}