#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> V(n);
        int aux=INT_MAX;
        int p=-1;
        for(int i=0;i<n;i++){
            cin>>V[i];
            if(V[i]<aux){
                aux=V[i];
                p=i;
            }
        }
        int sol=0;
        for(int i=0;i<n;i++){
            if(p==i)continue;
            sol+=(k-V[i])/aux;
        }
        cout<<sol<<"\n";
    }
}