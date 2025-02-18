#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    string s="ab";
    map<string,int> M;
    int c=1;
    while(true){
        M[s]=c++;
        do{
        if(s[1]!='z'){
            s[1]++;
        }
        else{
            s[1]='a';
            s[0]++;
        }
        }while(s[1]==s[0]);
        if(s[0]==('z'+1) and s[1]=='z')break;
    }
    while(t--){
        cin>>s;
        cout<<M[s]<<"\n";
    }
} 