#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>>V;
    vector<int> O;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            O.push_back(i);
        }
        else{
            V.emplace_back(x,i);
        }
    }
    sort(V.rbegin(),V.rend());
    vector<pair<int,int>> edges;
    int sol=0;
    if(V.size()>1){
        swap(V[1].first,V[V.size()-1].first);
        swap(V[1].second,V[V.size()-1].second);
    }
    int M=V.size();
    M--;
    for(int i=0;i<M;i++){
        V[i].first--;
        V[i+1].first--;
        edges.emplace_back(V[i].second,V[i+1].second);
        sol++;
    }
    bool aux=false;
    if(O.size()>0){
        if(V.size()==0 or V[0].first==0){
            cout<<"NO";
            return 0;
        }
        edges.emplace_back(O[0],V[0].second);
        V[0].first--;
        sol++;
    }
    if(O.size()>1){
        if(V[M].first==0){
            goto done;
            aux=true;
        }
        edges.emplace_back(O[1],V[M].second);
        V[M].first--;
        sol++;
    }
    done:;
    int p=0;
    for(int i=2;i<O.size();i++){
        if(aux and i==2){
            i--;
            aux=false;
        }
        while(V[p].first==0){
            p++;
            if(p==V.size()){
                cout<<"NO";
                return 0;
            }
        }
        V[p].first--;
        edges.emplace_back(O[i],V[p].second);
    }
    cout<<"YES "<<sol<<"\n";
    cout<<edges.size()<<"\n";
    for(auto i : edges)cout<<i.first+1<<" "<<i.second+1<<"\n";
}