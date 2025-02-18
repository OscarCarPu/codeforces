#include <bits/stdc++.h>
using namespace std;
#define int long long
void sum(int& h,int& m, int s){
    while(s--){
        m++;
        if(m==60){
            m=0;
            h++;
        }
    }
}
void res(int& h,int& m,int s){
    while(s--){
        m--;
        if(m==-1){
            m=59;
            h--;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,s;
    cin>>n>>s;
    int h=0,m=0;
    int ah,am;
    cin>>ah>>am;
    bool done=false;
    sum(h,m,s);
    if(h<ah or (h<=ah and m<am)){
        cout<<"0 0";
        done=true;
    }
    h=ah,m=am;
    for(int i=1;i<n;i++){
        cin>>ah>>am;
        if(done)continue;
        sum(h,m,s*2+1);
        if(h<ah or (h<=ah and m<am)){
            res(h,m,s);
            cout<<h<<" "<<m;
            done=true;
        }
        h=ah,m=am;
    }
    if(done==false){
        sum(h,m,s+1);
        cout<<h<<" "<<m;
    }
}