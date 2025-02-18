#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        map<char,int> M;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            char e;
            cin>>e;
            M[e]++;
        }
        int sol=0;
        for(char e='A';e<='Z';e++){
            if(M.count(e)){
                sol+=1+M[e];
            }
        }
        cout<<sol<<"\n";
    }
}