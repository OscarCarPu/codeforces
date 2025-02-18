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
        int n;
        cin>>n;
        set<int> S;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            S.insert(x);
        }
        if(n%2==S.size()%2){
            cout<<S.size()<<"\n";
        }
        else{
            cout<<S.size()-1<<"\n";
        }
    }
}