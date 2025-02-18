#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int n1=0,n0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')n1++;
        else n0++;
    }
    if(n1==n0){
        cout<<"2\n"<<s[0]<<" ";
        for(int i=1;i<n;i++)cout<<s[i];
    }
    else{
        cout<<"1\n"<<s;
    }
}