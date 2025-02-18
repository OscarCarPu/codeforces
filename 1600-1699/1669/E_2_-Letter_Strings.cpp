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
        map<char,int> M1,M2;
        vector<vector<int>> G1(12,vector<int>(12,0));
        int sol=0;
        while(n--){
            string s;
            cin>>s;
            sol+=M1[s[0]];
            sol+=M2[s[1]];
            sol-=G1[s[0]-'a'][s[1]-'a']*2;
            M1[s[0]]++;
            M2[s[1]]++;
            G1[s[0]-'a'][s[1]-'a']++;
        }
        cout<<sol<<"\n";
    }
}