#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
#define vc vector<char>
#define vvc vector<vc>
#define vvb vector<vb>
#define si set<int>
#define mii map<int,int>

const int MOD=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"1\n";
        }
        else if(n==2){
            cout<<"1 2\n";
        }
        else{
            vi a(n);
            for(int i=0;i<n;i++){
                a[i]=i+1;
            }
            swap(a[0],a[1]);
            swap(a[2],a[n-1]);
            swap(a[1],a[n/2]);
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
    
}
