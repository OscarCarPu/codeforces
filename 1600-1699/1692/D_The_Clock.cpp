#include <bits/stdc++.h>
using namespace std;
#define int long long
bool pal(int h,int m){
    return h/10==m%10 and h%10==m/10;
}
int sum(int& h,int& m,int s){
    int sh=s/60;
    int mh=s%60;
    m+=mh;
    if(m>=60){
        m-=60;
        h++;
    }
    h+=sh;
    h%=24;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){ 
        int h=0,m=0;
        char e;
        cin>>e;
        h+=(e-'0')*10;
        cin>>e;
        h+=(e-'0');
        cin>>e>>e;
        m+=(e-'0')*10;
        cin>>e;
        m+=(e-'0');
        int s;
        cin>>s;
        int sol=0;
        set<pair<int,int>> S;
        while(!S.count({h,m})){
            if(pal(h,m))sol++;
            S.insert({h,m});
            sum(h,m,s);
        }
        cout<<sol<<"\n";
    }
}