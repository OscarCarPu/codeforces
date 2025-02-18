#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
int k;
bool comp(int a,int b){
    return a%k<b%k;
}
int d1(int x){
    return x%k; 
}
int d2(int x){
    return k-(x%k);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n>>k;
        vi V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        sort(V.begin(),V.end(),comp);
        vector<bool> B(n,false);
        int p1=0,p2=n-1;
        int sol=0;
        while(p2>p1){
            if(d1(V[p2])<d2(V[p1])){
                p2--;
                continue;
            }
            if(d1(V[p1])<d2(V[p2])){
                p1++;
                continue;
            }
            sol+=(V[p1]+V[p2])/k;
            B[p1]=true;
            B[p2]=true;
            p1++;
            p2--;
        }
        p2=n-1,p1=n-1;
        for(int i=0;i<n;i++){
            if(V[i]%k!=0){
                p1=i;
                break;
            }
        }
        while(p2>p1){
            if(B[p1]){
                p1++;
                continue;
            }
            if(B[p2]){
                p2--;
                continue;
            }
            if(V[p2]%k+V[p1]%k<k){
                p1++;
                continue;
            }
            sol+=(V[p1]+V[p2])/k;
            B[p1]=true;
            B[p2]=true;
            p1++;
            p2--;
        }
        p2=n-1,p1=0;
        while(p2>p1){
            if(B[p1]){
                p1++;
                continue;
            }
            if(B[p2]){
                p2--;
                continue;
            }
            sol+=(V[p1]+V[p2])/k;
            p1++;
            p2--;
        }
        cout<<sol<<"\n";
    }
}