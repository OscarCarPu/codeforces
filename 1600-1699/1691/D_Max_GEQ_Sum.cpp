#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool can=true;
        int m=-1*1e10;
        int p=-1;
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
            if(V[i]>m){
                m=V[i];
                p=i;
            }
        }
        int sum=0;
        for(int i=p-1;i>=0;i--){
            sum+=V[i];
            if(sum>0)can=false;
        }
        sum=0;
        for(int i=p+1;i<n;i++){
            if(V[i]==m){
                int aux=0;
                for(int j=i-1;j>=p;j--){
                    aux+=V[j];
                    if(aux>0)can=false;
                }
                p=i;
                sum=0;
            }
            else{
                sum+=V[i];
                if(sum>0)can=false;
            }
        }
        int neg=0;
        int last=0;
        for(int i=0;i<n;i++){
            if(V[i]<=0){
                neg+=abs(V[i]);
            }
            else{
                if(min(last,V[i])>neg)can=false;
                last=V[i];
                neg=0;
            }
        }
        if(can)cout<<"YES\n";
        else cout<<"NO\n";
    }
}