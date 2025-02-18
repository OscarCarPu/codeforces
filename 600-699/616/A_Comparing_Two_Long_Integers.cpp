#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    while(s1.length()<s2.length())s1.push_back('0');
    while(s2.length()<s1.length())s2.push_back('0');
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    if(s1.length()<s2.length()){
        cout<<"<";
    }
    else if(s2.length()<s1.length())cout<<">";
    else{
        if(s1<s2)cout<<"<";
        else if(s1>s2)cout<<">";
        else cout<<"=";
    }
}