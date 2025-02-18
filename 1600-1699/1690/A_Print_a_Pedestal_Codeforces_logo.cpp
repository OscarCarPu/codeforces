#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=(n-3)/3;
        if(n%3==0){
            cout<<a+1<<" "<<a+2<<" "<<a<<"\n";
        }
        else if(n%3==1){
            cout<<a+1<<" "<<a+3<<" "<<a<<"\n";
        }
        else{
            cout<<a+2<<" "<<a+3<<" "<<a<<"\n";
        }
    }
}