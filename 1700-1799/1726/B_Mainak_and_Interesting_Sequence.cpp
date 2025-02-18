#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m<n or (n%2==0 and m%2==1)){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
            if(n%2==1){
                for(int i=0;i<n-1;i++){
                    cout<<"1 ";
                    m--;
                }
                cout<<m<<"\n";
            }
            else{
                for(int i=0;i<n-2;i++){
                    cout<<"1 ";
                    m--;
                }
                cout<<m/2<<" "<<m/2<<"\n";
            }
        }
    }
}