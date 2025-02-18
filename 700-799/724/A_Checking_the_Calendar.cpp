#include <bits/stdc++.h>
using namespace std;
map<string,int> M={{"monday",0},{"tuesday",1},{"wednesday",2},{"thursday",3},{"friday",4},{"saturday",5},{"sunday",6}};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin>>s1>>s2;
    if(M[s1]==M[s2] or (M[s1]+3)%7==M[s2] or (M[s1]+2)%7==M[s2])cout<<"YES";
    else cout<<"NO";
}