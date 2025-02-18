#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n!=1)cout<<"-";
        cout<<n-1<<" "<<n<<"\n";
    }
}