#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    int sum=0;
    for(int i=2;i<a;i++){
        int aux=a;
        while(aux>0){
            sum+=aux%i;
            aux/=i;
        }
    }
    int x=a-2;
    
    cout<<sum/gcd(sum,x)<<"/"<<x/gcd(sum,x);

}