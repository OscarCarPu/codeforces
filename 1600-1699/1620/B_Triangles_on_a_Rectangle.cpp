#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
int Area(int x0,int y0,int x1,int y1,int x2,int y2){
    int res= (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
    if(res<0)res*=-1;
    return res;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int x;
        cin>>x;
        vi w1(x);
        for(int i=0;i<x;i++)cin>>w1[i];
        cin>>x;
        vi w2(x);
        for(int i=0;i<x;i++)cin>>w2[i];
        cin>>x;
        vi h1(x);
        for(int i=0;i<x;i++)cin>>h1[i];
        cin>>x;
        vi h2(x);
        for(int i=0;i<x;i++)cin>>h2[i];
        int sol=0;
        int a=w1[0];
        int b=w1[w1.size()-1];
        for(int i=0;i<w2.size();i++){
            sol=max(sol,Area(a,0,b,0,w2[i],h));
        }

        a=w2[0];
        b=w2[w2.size()-1];
        for(int i=0;i<w1.size();i++){
            sol=max(sol,Area(a,h,b,h,w1[i],0));
        }

        a=h1[0];
        b=h1[h1.size()-1];
        for(int i=0;i<h2.size();i++){
            sol=max(sol,Area(0,a,0,b,w,h2[i]));
        }

        a=h2[0];
        b=h2[h2.size()-1];
        for(int i=0;i<h1.size();i++){
            sol=max(sol,Area(w,a,w,b,0,h1[i]));
        }
        cout<<sol<<"\n";
    }
}