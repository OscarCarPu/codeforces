#include <bits/stdc++.h>
using namespace std;
#define int long long
double f(double x,double m,double w){
    return max(3*x/10,(1.0-m/250)*x-50*w);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double M[5];
    double sol=0;
    vector<double> P={500,1000,1500,2000,2500};
    for(int i=0;i<5;i++)cin>>M[i];
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        sol+=f(P[i],M[i],x);
    }
    double s,u;
    cin>>s>>u;
    sol+=s*100;
    sol-=u*50;
    cout<<sol;
}