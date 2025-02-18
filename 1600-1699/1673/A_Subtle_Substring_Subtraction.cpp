#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        string s;
        cin>>s;
        int a,b;
        for(char e : s){
            sum+=(e-'a'+1);
        }
        int n=s.length();
        if(n%2==0){
            cout<<"Alice "<<sum<<"\n";
        }
        else{
            sum-=min(s[0]-'a'+1,s[n-1]-'a'+1);
            if(sum>min(s[0]-'a'+1,s[n-1]-'a'+1)){
                cout<<"Alice "<<sum-min(s[0]-'a'+1,s[n-1]-'a'+1)<<"\n";
            }
            else cout<<"Bob "<<min(s[0]-'a'+1,s[n-1]-'a'+1)-sum<<"\n";
        }
    }
}