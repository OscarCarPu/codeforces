#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    map<char,int> M;
    for(char e : s)M[e]++;
    int sol=min(M['B'],min(M['u']/2,min(M['l'],min(M['b'],min(M['a']/2,min(M['s'], M['r']))))));
    cout<<sol;
}