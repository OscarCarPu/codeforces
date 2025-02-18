#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if((s[s.length()-1]-'0')%2==0)cout<<"0\n";
        else if((s[0]-'0')%2==0)cout<<"1\n";
        else{
            bool aux=false;
            for(int i=1;i<s.length()-1;i++){
                if((s[i]-'0')%2==0)aux=true;
            }
            if(aux)cout<<"2\n";
            else cout<<"-1\n";
        }
    }
}