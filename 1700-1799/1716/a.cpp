#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        vector<int> R1(m),R2(m);
        for(int i=0;i<m;i++){
            cin>>R1[i];
        }
        for(int i=0;i<m;i++)cin>>R2[i];
        vector<int> U1(m),U2(m);
        U1[m-1]=R1[m-1]+1;
        U2[m-1]=R2[m-1]+1;
        for(int i=m-2;i>=0;i--){
            U1[i]=max(U1[i+1]+1,R1[i]+1);
            U2[i]=max(U2[i+1]+1,R2[i]+1);
        }
        vector<int> L1(m),L2(m);
        int cnt=0;
        for(int i=m-1;i>=0;i--){
            L2[i]=R2[i]+1+cnt;
            if(i!=m-1){
                L2[i]=max(L2[i],L2[i+1]+1);
            }
            cnt++;
            L1[i]=R1[i]+1+cnt;
            if(i==0)L1[i]--;
            L1[i]=max(L1[i],U2[i]);
            if(i!=m-1){
                L1[i]=max(L1[i],L1[i+1]+1);
            }
            cnt++;
        }
        for(int i=0;i<m;i++)cout<<L1[i]<<" ";
        cout<<endl;
        for(int i=0;i<m;i++)cout<<L2[i]<<" ";
        /*int sol=L1[0];
        int aux=0;
        aux=max(aux+1,R2[0]+1);
        cnt=(m-1)*2;
        sol=min(sol,max(aux+cnt,L2[0]));
        cnt--;
        for(int i=1;i<m;i++){
            if(i%2){
                aux=max(aux+1,R2[i]+1);
                sol=min(sol,max(aux+cnt,L2[i]));
                cnt--;
                aux=max(aux+1,R1[i]+1);
                sol=min(sol,max(aux+cnt,L1[i]));
                cnt--;
            }
            else{
                aux=max(aux+1,R1[i]+1);
                sol=min(sol,max(aux+cnt,L1[i]));
                cnt--;
                aux=max(aux+1,R2[i]+1);
                sol=min(sol,max(aux+cnt,L2[i]));
                cnt--;
            }
        }
        cout<<sol<<"\n";*/
    }
}