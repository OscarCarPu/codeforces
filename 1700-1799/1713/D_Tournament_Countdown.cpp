#include <bits/stdc++.h>
using namespace std;
#define int long long
int query(int a,int b){
    cout<<"? "<<a<<" "<<b<<endl;
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
        int n;
        cin>>n;
        n=(1<<n);
        int m=n;
        vector<int> V(n);
        for(int i=0;i<n;i++)V[i]=i+1;
        int k=0;
        while(m>2){
            k=0;
            for(int i=0;i<m;i+=4){
            int x=query(V[i],V[i+2]);
            if(x==0){
                x=query(V[i+1],V[i+3]);
                if(x==1){
                    V[k++]=V[i+1];
                }
                else{
                    V[k++]=V[i+3];
                }
            }
            else if(x==1){
                x=query(V[i],V[i+3]);
                if(x==1){
                    V[k++]=V[i];
                }
                else{
                    V[k++]=V[i+3];
                }
            }
            else{
                x=query(V[i+1],V[i+2]);
                if(x==1){
                    V[k++]=V[i+1];
                }
                else{
                    V[k++]=V[i+2];
                }
            }
            }
            m/=4;
        }
        
        if(m==2){
            int x=query(V[0],V[1]);
            cout<<"! ";
            if(x==1)cout<<V[0]<<endl;
            else cout<<V[1]<<endl;
        }
        else{
            cout<<"! ";
            cout<<V[0]<<endl;
        }
    }
}