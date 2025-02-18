#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
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
        vb B(n,false);
        int o=0;
        int sol=0;
        for(int i=0;i<n*2;i++){
            if(s[i]=='('){
                o++;
                if(B[o]==false){
                    B[o]=true;
                    sol++;
                }
            }
            else{
                B[o+1]=false;
                o--;
            }
        }
        cout<<sol<<"\n";
    }
}