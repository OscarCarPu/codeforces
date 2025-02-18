#include <bits/stdc++.h>
using namespace std;
int poW(int a,int p){
    if(p==0)return 1;
    return poW(a*a,p/2)*(p%2 ? a : 1);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n>>l;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int sol=0;
        for(int j=0;j<l;j++){
            int cont=0;
            for(int i=0;i<n;i++){
                if(a[i]%2){
                    cont++;
                }
                a[i]/=2;
            }
            if(cont>n/2){
                sol+=poW(2,j);
            }
        }
        cout<<sol<<"\n";
    }
}