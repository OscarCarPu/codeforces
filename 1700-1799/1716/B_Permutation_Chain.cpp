#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<n<<"\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(i==0)break;
                if(j!=i)cout<<j+2<<" ";
                if(j==i)cout<<"1 ";
            }
            for(int x=i+(i>0);x<n;x++){
                cout<<x+1<<" ";
            }
            cout<<"\n";
        }
    }
}