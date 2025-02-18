#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    bool p,g,b,o,r,y;
    p=g=b=o=r=y=false;
    int sol=6;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="purple"){
            p=true;
            sol--;
        }
        else if(s=="green"){
            g=true;
            sol--;
        }
        else if(s=="blue"){
            b=true;
            sol--;
        }
        else if(s=="orange"){
            o=true;
            sol--;
        }
        else if(s=="red"){
            r=true;
            sol--;
        }
        else if(s=="yellow"){
            y=true;
            sol--;
        }
    }
    cout<<sol<<"\n";
    if(!p)cout<<"Power\n";
    if(!g)cout<<"Time\n";
    if(!b)cout<<"Space\n";
    if(!o)cout<<"Soul\n";
    if(!r)cout<<"Reality\n";
    if(!y)cout<<"Mind\n";
}