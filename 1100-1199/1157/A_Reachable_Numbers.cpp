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
    int n;
    cin>>n;
    set<int> S;
    while(!S.count(n)){
        S.insert(n);
        n++;
        while(n%10==0)n/=10;
    }
    cout<<S.size()<<"\n";
}