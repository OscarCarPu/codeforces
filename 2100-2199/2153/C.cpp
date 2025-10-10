#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    map<int,int> sticks;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sticks[x]++;
    }

    vector<pii> sorted(all(sticks));
    int total_length=0,sol=0;
    int imp1=0,imp2=0;

    for(auto& [length,cnt] : sorted){
        int even=cnt-(cnt%2);
        if(even){
            int per=total_length+even*length+imp1+imp2;
            if(length*2<per)sol=max(sol,per);
        }
        int odd=cnt-(cnt%2==0);
        if(odd){
            int per=total_length+odd*length+imp1+imp2;
            per-=imp2;
            if(length*2<per)sol=max(sol,per);
        }
        total_length+=length*even;
        if(cnt%2){
            imp2=imp1;
            imp1=length;
        }
    }

    cout<<sol<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
}
