#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int sum=1;
    for(int i=2;i<=min(a,b);i++){
        sum*=i;
    }
    cout<<sum;
    return 0;
}