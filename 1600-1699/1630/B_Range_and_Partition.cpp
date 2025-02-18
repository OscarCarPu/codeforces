#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),sr_a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sr_a[i]=a[i];
        }
        sort(sr_a.begin(),sr_a.end());
        int siz=LLONG_MAX;
        int l=-1,r=-1;
        int ned=(n+k+1)/2;
        for(int i=0;i<n-ned+1;i++){
            int auxl=sr_a[i];
            int auxr=sr_a[i+ned-1];
            if(auxr-auxl<siz){
                siz=auxr-auxl;
                r=auxr;
                l=auxl;
            }
        }
        cout<<l<<" "<<r<<"\n";
        int cnt=0;
        int val=0;
        int sear=1;
        vector<int> sol;
        sol.push_back(1);
        for(int i=0;i<n;i++){
            if(a[i]>=l and a[i]<=r){
                val++;
            }
            else val--;
            
            if(i==n-1){
                sol.push_back(i+1);
            }
            if(val==sear){
                if(sear==k)continue;
                sear++;
                
                sol.push_back(i+1);
                sol.push_back(i+2);
            }
        }
        for(int i=0;i<k*2;i+=2){
            cout<<sol[i]<<" "<<sol[i+1]<<endl;
        }
    }
}