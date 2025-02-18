#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sol=0;
        set<char> S;
        for(char e : s){
            if(S.size()==3){
                if(!S.count(e)){
                    S.clear();
                    sol++;
                    S.insert(e);
                }
            }
            else S.insert(e);
        }
        sol++;
        cout<<sol<<"\n";
    }
}