#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<bool> prime(1001,true);
    prime[0]=prime[1]=false;
    vector<int> sol;
    for(int i=2;i<1001;i++){
        if(prime[i]){
            sol.push_back(i);
            for(int j=i*2;j<1001;j+=i)prime[j]=false;
        }
    }
    int f=0;
    for(int i=2;sol[i]<=n;i++){
        for(int j=i-1;j>=1;j--){
            if(sol[i]==sol[j]+sol[j-1]+1){
                f++;
                break;
            }
        }
    }
    if(f>=k)cout<<"YES";
    else cout<<"NO";
}