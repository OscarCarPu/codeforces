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
int n;
vi query(vi ask){
    cout<<ask.size()<<endl;
    for(int i : ask)cout<<i<<" ";
    cout<<endl;
    vi ans(n);
    for(int i=0;i<n;i++)cin>>ans[i];
    return ans;
}
void solv(vi sol){
    cout<<"-1"<<endl;
    for(int i : sol)cout<<i<<" ";
    cout<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    int bits=1;
    int auxn=n-1;
    while(auxn){
        auxn/=2;
        bits*=2;
    }
    bits/=2;
    vi sol(n,LN);
    vb tun(n);
    for(int bit=bits;bit;bit/=2){
        vi fiq,seq;
        int turn=0;
        bool on=true;
        string a,b;
        for(int i=0;i<n;i++){
            tun[i]=on;
            if(on){
                fiq.push_back(i+1);
               // a.push_back('1');
                //b.push_back('0');
            }
            else seq.push_back(i+1);
            turn++;
            if(turn==bit){
                turn=0;
                on^=1;
            }
        }
        //cout<<a<<endl<<b<<endl;
        vi fia=query(fiq);
        //cerr<<"A";
        vi sea=query(seq);
        for(int i=0;i<n;i++){
            if(!tun[i]){
                sol[i]=min(sol[i],fia[i]);
            }
            else{
                sol[i]=min(sol[i],sea[i]);
            }
        }
    }
    solv(sol);
}

