#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int aux,sum=1,res=1;
        cin>>aux;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            if(aux==x)sum++;
            else{
                res=max(res,sum);
                sum=1;
            }
            aux=x;
        }
        res=max(res,sum);
        cout<<res<<"\n";
    }
    return 0;
}