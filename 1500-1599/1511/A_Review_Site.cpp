#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sol=0;
        while(n--){
            int x;
            cin>>x;
            switch(x){
                case 1:sol++;break;
                case 2:break;
                case 3:sol++;break;
                default:break;
            }
        }
        cout<<sol<<"\n";
    }
    return 0;
}