#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int b=0,s=0,c=0;
    string S;
    cin>>S;
    for(char e : S){
        if(e=='B')b++;
        if(e=='S')s++;
        if(e=='C')c++;
    }
    int nb,ns,nc,pb,ps,pc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    int x;
    cin>>x;
    int high=1e13;
    int low=0;
    int res=low;
    while(high>=low){
        int mid=(high+low)/2;
        int cost=(max(0LL,(mid*b-nb)*pb))+max(0LL,((mid*s-ns)*ps))+max(0LL,((mid*c-nc)*pc));
        if(cost<=x){
            low=mid+1;
            res=mid;
        }
        else{
            high=mid-1;
        }
    }
    cout<<res;
}