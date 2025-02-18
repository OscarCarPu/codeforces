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
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int> M;
    for(int i=0;i<n-1;i++){
        string aux;
        aux.push_back(s[i]);
        aux.push_back(s[i+1]);
        M[aux]++;
    }
    string sol;
    int ma=0;
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string aux;
            aux.push_back(char('A'+i));
            aux.push_back(char('A'+j));
            if(ma<M[aux]){
                sol=aux;
                ma=M[aux];
            }
        }
    }
    cout<<sol;
}