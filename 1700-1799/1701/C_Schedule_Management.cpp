#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int mx=0;
        vector<int> a(n+1,0);
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            a[x]++;
            mx=max(mx,a[x]);
        }
        sort(a.begin(),a.end());
        int high=mx,low=0,res=-1;
        while(high>=low){
            int mid=(high+low)/2;
            int i=1,j=n;
            bool can=true;
            vector<int> aux=a;
            while(true){
                if(j<=i)break;
                if(a[i]>mid){can=false;break;}
                if(a[j]<=mid){
                    j--;
                    continue;
                }
                else{
                    int nj=a[j]-mid;
                    int ci=(mid-a[i])/2;
                    if(nj<=ci){
                        a[i]+=nj*2;
                        a[j]=mid;
                        j--;
                    }
                    else{
                        a[i]=mid;
                        a[j]-=ci;
                        i++;
                    }
                }
            }
            for(int i=1;i<=n;i++){
                if(a[i]>mid)can=false;
            }
            a=aux;
            if(can){
                high=mid-1;
                res=mid;
            }
            else low=mid+1;
        }
        cout<<res<<"\n";
    }
 }