#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    int suma=0;
    for(int i=0;i<n;i++){
        int A,B;
        cin>>A>>B;
        suma+=A;
        a[i]=A-B;
    }
    m-=suma;
    m*=-1;
    m=max(m,0LL);
    int sol=0;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++){
        if(m>0){
            sol++;
            m-=a[i];
        }
    }
    if(m>0)sol=-1;
    cout<<sol;
}