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
        vector<pair<int,int>> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i].first>>x[i].second;
        }
        sort(x.begin(),x.end());
        int act=0;
        vector<int> p(n);
        vector<int> stop(n,0);

        int aux=0;
        for(int i=0;i<n;i++){

            int high=n-1,low=i+1;
            int res=-1;
            while(high>=low){
                int mid=(high+low)/2;
                if(x[mid].first-x[i].first>x[i].second){
                    high=mid-1;
                    res=mid;
                }
                else{
                    low=mid+1;
                }
            }
            if(res!=-1){
                stop[res]++;
            }
            aux-=stop[i];
            if(i)act-=aux*abs(x[i].first-x[i-1].first);
            p[i]=act;
            act+=x[i].second;
            aux++;
        }


        act=aux=0;
        stop=vector<int>(n,0);
        for(int i=n-1;i>=0;i--){

            int low=0,high=i-1;
            int res=-1;
            while(high>=low){
                int mid=(high+low)/2;
                if(x[i].first-x[mid].first>x[i].second){
                    low=mid+1;
                    res=mid;
                }
                else high=mid-1;
            }
            if(res!=-1)stop[res]++;
            aux-=stop[i];
            act+=x[i].second;
            if(i<n-1)act-=aux*abs(x[i].first-x[i+1].first);
            p[i]+=act;
            aux++;
        }
        for(int i=0;i<n;i++)cout<<p[i]<<" ";

    }
}