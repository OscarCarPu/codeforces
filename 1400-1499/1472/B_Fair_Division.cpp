#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,n1=0,n2=0;
        cin>>n;
        for(int a=0;a<n;a++){
            int aux;
            cin >> aux;
            if(aux==1)n1++;
            else n2++;
        }
        if((n1+(n2*2))%2==0){
            if(n1==0){
                if(n2%2==0){
                    cout<<"YES";
                }
                else{
                    cout<<"NO";
                }
            }
            else{
                cout<<"YES";
            }
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}