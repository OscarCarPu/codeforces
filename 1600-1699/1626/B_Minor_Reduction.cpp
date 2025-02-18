#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        string aux=x;
        int n=x.length();
        int auxx=aux[0]+aux[1]-'0'*2;
        string may=" ";

        if(auxx<10){
            aux.erase(aux.begin());
        aux[0]=auxx+'0';
        may=aux;
        }
        aux=x;
        for(int i=n-1;i>0;i--){
            int a=x[i-1]-'0';
            int b=x[i]-'0';
            if(a+b>9){
                aux[i-1]=char((a+b)/10+'0');
                aux[i]=char((a+b)%10+'0');
                may=aux;
                break;
            }
        }
        cout<<may<<"\n";
    }
}