#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,xm=0,ym=0,xM=0,yM=0;
        cin>>x>>y;
        string s;
        cin>>s;
        for(int i=0;i<(int)s.length();i++){
            switch(s[i]){
                case 'R':xM++;break;
                case 'D':ym++;break;
                case 'U':yM++;break;
                case 'L':xm++;break;
                default:break;
            }
        }
        bool sol=true;

        if(x<0 and abs(x)>xm)sol=false;
        if(x>0 and x>xM)sol=false;
        if(y<0 and abs(y)>ym)sol=false;
        if(y>0 and y>yM)sol=false;
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}