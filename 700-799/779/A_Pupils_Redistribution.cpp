#include <bits/stdc++.h>
using namespace std;
#define int long long
int A[5],B[5],C[5];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> F(6);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        F[x]++;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        F[x]--;
    }
    int sol=0;
    for(int i=1;i<=5;i++){
        if(abs(F[i])%2==1){
            cout<<"-1";
            return 0;
        }
        sol+=abs(F[i]);
    }
    cout<<sol/4;
}