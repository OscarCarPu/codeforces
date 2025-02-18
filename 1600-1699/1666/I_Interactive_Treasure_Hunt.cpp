#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define f first
#define s second
vector<vector<bool>> B;
int d(int x1,int y1,int x2,int y2){
    return abs(x2-x1)+abs(y2-y1);
}
int ask(int i,int j){
    cout<<"SCAN "<<i+1<<" "<<j+1<<endl;
    int x;
    cin>>x;
    return x;
}
int ans(int i,int j){
    cout<<"DIG "<<i+1<<" "<<j+1<<endl;
    int x;
    cin>>x;
    return x;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<pair<pi,pi>> S;
        int val=LLONG_MAX;
        int solx=0,soly=0;
        val=ask(solx,soly);
        set<pi> Discart;
        Discart.insert({0,0});
        for(int px1=0;px1<n;px1++){
            for(int py1=0;py1<m;py1++){
                for(int px2=0;px2<n;px2++){
                    for(int py2=0;py2<m;py2++){
                        if(px1==px2 and py1==py2)continue;
                        int c=px1+px2+py1+py2;
                        if(c==val){
                            S.insert({{px1,py1},{px2,py2}});
                        }
                    }
                }
            }
        }
        //Segunda busqueda
        int aux=0;
        for(int sx=0;sx<n;sx++){
            for(int sy=0;sy<m;sy++){
                set<int> C;
                for(auto i : S){
                    int c=0;
                    c+=d(sx,sy,i.f.f,i.f.s);
                    c+=d(sx,sy,i.s.f,i.s.s);
                    C.insert(c);
                }
                if(C.size()>aux){
                    aux=C.size();
                    solx=sx;
                    soly=sy;
                }
            }
        }
        if(Discart.count({solx,soly}))goto done;
        val=ask(solx,soly);
        Discart.insert({solx,soly});
        set<pair<pi,pi>> AUX;
        for(auto i : S){
            int c=0;
            c+=d(solx,soly,i.f.f,i.f.s);
            c+=d(solx,soly,i.s.f,i.s.s);
            if(c==val){
                AUX.insert(i);
            }
        }
        S=AUX;
        //Tercera
        aux=0;
        for(int sx=0;sx<n;sx++){
            for(int sy=0;sy<m;sy++){
                set<int> C;
                for(auto i : S){
                    int c=0;
                    c+=d(sx,sy,i.f.f,i.f.s);
                    c+=d(sx,sy,i.s.f,i.s.s);
                    C.insert(c);
                }
                if(C.size()>aux){
                    aux=C.size();
                    solx=sx;
                    soly=sy;
                }
            }
        }
        if(Discart.count({solx,soly}))goto done;
        val=ask(solx,soly);
        Discart.insert({solx,soly});
        AUX.clear();
        for(auto i : S){
            int c=0;
            c+=d(solx,soly,i.f.f,i.f.s);
            c+=d(solx,soly,i.s.f,i.s.s);
            if(c==val){
                AUX.insert(i);
            }
        }
        S=AUX;
        //Cuarta
        aux=0;
        for(int sx=0;sx<n;sx++){
            for(int sy=0;sy<m;sy++){
                set<int> C;
                for(auto i : S){
                    int c=0;
                    c+=d(sx,sy,i.f.f,i.f.s);
                    c+=d(sx,sy,i.s.f,i.s.s);
                    C.insert(c);
                }
                if(C.size()>aux){
                    aux=C.size();
                    solx=sx;
                    soly=sy;
                }
            }
        }
        if(Discart.count({solx,soly}))goto done;
        val=ask(solx,soly);
        Discart.insert({solx,soly});
        AUX.clear();
        for(auto i : S){
            int c=0;
            c+=d(solx,soly,i.f.f,i.f.s);
            c+=d(solx,soly,i.s.f,i.s.s);
            if(c==val){
                AUX.insert(i);
            }
        }
        S=AUX;
        //Quinta
        aux=0;
        for(int sx=0;sx<n;sx++){
            for(int sy=0;sy<m;sy++){
                set<int> C;
                for(auto i : S){
                    int c=0;
                    c+=d(sx,sy,i.f.f,i.f.s);
                    c+=d(sx,sy,i.s.f,i.s.s);
                    C.insert(c);
                }
                if(C.size()>aux and Discart.count({sx,sy})==0){
                    aux=C.size();
                    solx=sx;
                    soly=sy;
                }
            }
        }
        if(Discart.count({solx,soly}))goto done;
        val=ask(solx,soly);
        Discart.insert({solx,soly});
        AUX.clear();
        for(auto i : S){
            int c=0;
            c+=d(solx,soly,i.f.f,i.f.s);
            c+=d(solx,soly,i.s.f,i.s.s);
            if(c==val){
                AUX.insert(i);
            }
        }
        S=AUX;
        int a=0;
        for(auto i : S){
            if(a==1)break;
            a++;
            int b=ans(i.f.f,i.f.s);
            int b=ans(i.s.f,i.s.s);
        }
        continue;
        done:;
        a=0;
        for(auto i : S){
            if(a==2)break;
            int b=ans()
        }
    }
}