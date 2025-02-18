#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a=1;
        int x=n;
        int aux=n;
        if(n%2==1)n--;
        else n-=2;
        if(n/2<k){
            cout<<"-1\n";
            continue;
        }
        for(int i=0;i<aux;i++){
            if(i%2==1 and k>0){
                cout<<x<<" ";
                x--;
                k--;
            }
            else{
                cout<<a<<" ";
                a++;
            }
        }
        cout<<"\n";
    }
}