#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<pair<int,int>,int> M;
        int d=0,k=0;
        for(char e : s){
            if(e=='D')d++;
            else k++;
            cout<<++M[{d/gcd(d,k),k/gcd(d,k)}]<<" ";
        }
        cout<<"\n";
    }
}