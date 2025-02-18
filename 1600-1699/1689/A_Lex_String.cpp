#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k,pn=0,pm=0;
        cin>>n>>m>>k;
        string a,b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        string sol;
        int ak=0,bk=0;
        while(pn<n and pm<m){
            if((a[pn]<b[pm] and ak<k) or bk==k){
                sol.push_back(a[pn++]);
                ak++;
                bk=0;
            }
            else{
                bk++;
                ak=0;
                sol.push_back(b[pm++]);
            }
        }
        cout<<sol<<"\n";
    }
}