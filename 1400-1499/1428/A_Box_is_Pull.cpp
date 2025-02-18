#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int sol=abs(x1-x2)+abs(y1-y2)+2;
        if(x1==x2 or y1==y2)sol-=2;
        cout<<sol<<"\n";
    }
}