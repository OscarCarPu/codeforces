#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int mcm(int a,int b){
    return (a*b)/gcd(a,b);
}
const int N=2e7+13;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> mind(N,-1),val(N);
    mind[1]=1;
    for(int i=2;i<N;i++){
        if(mind[i]==-1){
            for(int j=i;j<N;j+=i){
                if(mind[j]==-1)mind[j]=i;
            }
        }
    }
    for(int i=2;i<N;i++){
        int j=i/mind[i];
        val[i]=val[j]+(mind[i]!=mind[j]);
    }
    int t;
    cin>>t;
    while(t--){
        int c,d,x;
        cin>>c>>d>>x;
        int ans=0;
        for(int i=1;i*i<=x;i++){
            if(x%i!=0)continue;
            int k1=x/i+d;
            if(k1%c==0)ans+=1<<val[k1/c];
            if(i*i==x)continue;
            int k2=i+d;
            if(k2%c==0)ans+=1<<val[k2/c];
        }
        cout<<ans<<"\n";
    }
}
/*
c*lcm(a,b)-d*gcd(a,b)=x;
A=a/gcd(a,b);
B=b/gcd(a,b);
lcm(a,b)=A*b*gcd(a,b);
g=gcd(a,b);
c*ABg-dg=x;
g(c*AB-d)=x;
cAB=x/g+d

(c*a*b)/gcd(a,b)-d*gcd(a,b)=x;


*/