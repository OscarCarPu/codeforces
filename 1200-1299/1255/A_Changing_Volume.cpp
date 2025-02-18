#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sol=abs(b-a)/5;
        if(abs(b-a)%5>2)sol+=2;
        else if(abs(b-a)%5!=0)sol++;
        cout<<sol<<"\n";
    }
}