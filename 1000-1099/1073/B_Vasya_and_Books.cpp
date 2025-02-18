#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<bool> B(n+1,true);
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos=0;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        int x=0;
        if(B[b]){
            while(true){
                x++;
                B[a[pos]]=false;
                if(a[pos]==b)break;
                pos++;
            }
            pos++;
        }
        cout<<x<<" ";
    }
}