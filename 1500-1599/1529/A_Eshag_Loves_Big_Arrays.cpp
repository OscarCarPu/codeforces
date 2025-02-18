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
        int min=INT_MAX;
        int cont=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<min){
                cont=1;
                min=x;
            }
            else if(x==min){
                cont++;
            }
        }
        cout<<n-cont<<"\n";
    }
}