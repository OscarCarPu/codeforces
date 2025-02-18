#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int h,n;
        cin>>h>>n;
        int sol=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(h-x>2){
                sol++;
                h-=2;
            }
            else{
                h=x;
            }
        }
        cout<<sol<<"\n";
    }
}
101011101