#include <bits/stdc++.h>
using namespace std;
#define int long long
string binary(int n){
    string aux="";
    while(n>0){
        if(n%2)aux.push_back('1');
        else aux.push_back('0');
        n/=2;
    }
    return aux;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        string x,y;
        cin>>x>>y;
        a=b=0;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        while(y[a]=='0')a++;
        b=a;
        while(x[b]=='0')b++;
        cout<<b-a<<"\n";
    }
}