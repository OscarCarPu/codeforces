#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    map<int,int> M={{0,6},{1,2},{2,5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6}};
    int sol=0;
    for(int i=a;i<=b;i++){
        int aux=i;
        while(aux>0){
            sol+=M[aux%10];
            aux/=10;
        }
    }
    cout<<sol;
}