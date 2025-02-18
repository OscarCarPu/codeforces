#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string a,b;
        cin>>a>>b;
        int ch=0;
        vector<int> p;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])p.push_back(i),ch++;
        }
        if(ch%2){
            cout<<"-1\n";
            continue;
        }
        if(ch==0){
            cout<<"0\n";
            continue;
        }
        x=min(x,y*2);
        int cost=0;
        if(x<y){
            for(int i=1;i<p.size();i++){
                if(p[i]==p[i-1]+1){
                    ch-=2;
                    cost+=x;
                    i++;
                }
            }
            cost+=(y*(ch/2));
        }
        else{
            if(p.size()==2 and p[0]+1==p[1])cost+=x;
            else cost=p.size()/2*y;
        }
        cout<<cost<<"\n";
    }
}