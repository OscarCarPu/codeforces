#include <bits/stdc++.h>
using namespace std;
unordered_set<string> S={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE","0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17"};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=0;
    while(n--){
        string s;
        cin>>s;
        if(S.count(s))sol++;
    }
    cout<<sol;
}