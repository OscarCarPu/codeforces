#include <bits/stdc++.h>
using namespace std;
int dist(int x1,int y1,int x2,int y2){
    return abs(x1-x2)+abs(y1-y2);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    int X,Y;
    cin>>X>>Y;
    int sol=dist(x,y,X+1,Y);
    sol=min(sol,dist(x,y,X+1,Y+1));
    sol=min(sol,dist(x,y,X+1,Y-1));
    sol=min(sol,dist(x,y,X,Y));
    sol=min(sol,dist(x,y,X,Y+1));
    sol=min(sol,dist(x,y,X,Y-1));
    sol=min(sol,dist(x,y,X-1,Y));
    sol=min(sol,dist(x,y,X-1,Y+1));
    sol=min(sol,dist(x,y,X-1,Y-1));
    cout<<sol*2+8;
}