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
        string s;
        cin>>s;
        int x=n/2;
        int i=x;
        if(n%2==1)x++,i++;
        while(i<n){
            if(s[i]==s[i-1])i++;
            else break;
        }
        if(n%2==0){
            cout<<(i-x)*2<<"\n";
        }
        else{
            cout<<(i-x)*2+1<<"\n";
        }
    }
}