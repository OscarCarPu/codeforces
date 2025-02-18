#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int sol=0;
        while(n!=1){
            sol++;
            if(n%2==0)n/=2;
            else if(n%3==0)n=(n*2)/3;
            else if(n%5==0)n=(n*4)/5;
            else{
                sol=-1;break;
            }
        }
        cout<<sol<<"\n";
    }
    return 0;
}