#include <bits/stdc++.h>
using namespace std;
#define int long long
map<char,int> M={{'6',0},{'7',1},{'8',2},{'9',3},{'T',4},{'J',5},{'Q',6},{'K',7},{'A',8}};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char e;
    cin>>e;
    char x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    if(x2==y2){
        if(M[x1]>M[y1])cout<<"YES";
        else cout<<"NO";
    }
    else if(x2==e)cout<<"YES";
    else cout<<"NO";
}