#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
bool is_prime(int n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vi V(n);
        int x=-1;
        for(int i=0;i<n;i++){
            cin>>V[i];
            sum+=V[i];
            if(V[i]%2)x=i;
        }
        if(is_prime(sum)){
            cout<<n-1<<"\n";
            for(int i=0;i<n;i++)if(x!=i)cout<<i+1<<" ";
            cout<<"\n";
        }
        else{
            cout<<n<<"\n";
            for(int i=1;i<=n;i++)cout<<i<<" ";
            cout<<"\n";
        }
    }
}