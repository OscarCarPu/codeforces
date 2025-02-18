#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int n,m,x;
        cin>>n>>m>>x;
        long long int sol=(((x-1)%n)*m+((x-1)/n)+1);
        cout<<sol<<"\n";
    }
    return 0;
}