#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt_zero = 0;
        bool paridad_negativos = true;
        for (int i =0 ;i<n;i++){
            int x;
            cin>>x;
            if(x<0) paridad_negativos = !paridad_negativos;
            if(x==0) cnt_zero++;
        }
        int puntuacion =0;
        puntuacion += cnt_zero;
        if(paridad_negativos == false) puntuacion += 2;
        cout<<puntuacion<<'\n';
    }
}