#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f first
#define s second
#define eb emplace_back
bool x(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)return a.first<b.first;
    return a.second<b.second;
}
bool y(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second)return a.second<b.second;
    return a.first<b.first;
}
int d(pair<int,int> a,pair<int,int> b){
    return abs(a.first-b.first)+abs(a.second-b.second);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int,int>> V(3);
    cin>>V[0].first>>V[0].second>>V[1].first>>V[1].second>>V[2].first>>V[2].second;

    int cost=LLONG_MAX;
    vector<pair<int,int>> sol;
    for(int i=0;i<3;i++){
        for(int i2=0;i2<3;i2++){
            for(int i3=0;i3<3;i3++){
                if(i==i2 or i2==i3 or i3==i)continue;
                int aux=d(V[i],V[i2]);
                vector<pair<int,int>> auxx;
                auxx.emplace_back(V[i].f,V[i].s);
                auxx.emplace_back(V[i2].f,V[i].s);
                auxx.emplace_back(V[i2].f,V[i2].s);
                int X=max(V[i].f,V[i2].f);
                int x=min(V[i].f,V[i2].f);
                int Y=max(V[i].s,V[i2].s);
                int y=min(V[i].s,V[i2].s);
                int tx=V[i3].f;
                int ty=V[i3].s;
                int p1,p2,p3,px=LLONG_MAX,py=LLONG_MAX;
                p1=d({tx,ty},{V[i].f,V[i].s});
                p2=d({tx,ty},{V[i2].f,V[i].s});
                p3=d({tx,ty},{V[i2].f,V[i2].s});
                if(tx>=x and tx<=X){
                    px=d({tx,ty},{tx,V[i].s});
                }
                if(ty>=y and ty<=Y){
                    py=d({tx,ty},{V[i2].f,ty});
                }
                if(p1<=p2 and p1<=p3 and p1<=px and p1<=py){
                    auxx.emplace_back(tx,ty);
                    auxx.emplace_back(tx,V[i].s);
                    auxx.emplace_back(V[i].f,V[i].s);
                    aux+=p1;
                }
                else if(p2<=p1 and p2<=p3 and p2<=px and p2<=py){
                    auxx.emplace_back(tx,ty);
                    auxx.emplace_back(tx,V[i].s);
                    auxx.emplace_back(V[i2].f,V[i].s);
                    aux+=p2;
                }
                else if(p3<=p1 and p3<=p2 and p3<=px and p3<=py){
                    auxx.eb(tx,ty);
                    auxx.eb(tx,V[i2].s);
                    auxx.eb(V[i2].f,V[i2].s);
                    aux+=p3;
                }
                else if(px<=p1 and px<=p2 and px<=p3 and px<=py){
                    auxx.eb(tx,ty);
                    auxx.eb(tx,V[i].s);
                    aux+=px;
                }
                else{
                    auxx.eb(tx,ty);
                    auxx.eb(V[i2].f,ty);
                    aux+=py;
                }
                if(aux<cost){
                    cost=aux;
                    sol=auxx;
                }
            }
        }
    }
    cout<<sol.size()-2<<"\n";
    for(int i=1;i<sol.size();i++){
        cout<<sol[i-1].f<<" "<<sol[i-1].s<<" "<<sol[i].f<<" "<<sol[i].s<<"\n";
        if(i==2)i++;  
    }
}