#include <bits/stdc++.h>
using namespace std;
#define int long long
string s;
int p=0;
int f(int o=-1){
    int val=0;
    while(o!=0 and p<s.length()){
        if(s[p]=='('){
            p++;
            val=f(1);
        }
        else if(s[p]==')'){
            if(o==-1)return val;
            o--;
            
        }
        else{
            p+=2;
            val=max(val+1,f());
        }
    }
    p++;
    return val;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>s;
     cout<<f();
}