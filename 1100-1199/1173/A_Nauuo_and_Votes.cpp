#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    if(z>=abs(x-y) and z!=0)cout<<"?";
    else if(y-x>0)cout<<"-";
    else if(y-x<0)cout<<"+";
    else cout<<"0";
}