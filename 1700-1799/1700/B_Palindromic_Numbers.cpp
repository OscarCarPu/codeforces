#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='9'){
            reverse(s.begin(),s.end());
            string sol;
            int llevadas=0;
            for(char e : s){
                int x=e-'0';
                x+=llevadas;
                llevadas=0;
                if(x>11){
                    x=21-x;
                    llevadas=2;
                    sol.push_back(char((x%10)+'0'));
                }
                else if(x>1){
                    x=11-x;
                    llevadas=1;
                    sol.push_back(char((x%10)+'0'));
                }
                else{
                    x=1-x;
                    sol.push_back(char((x%10)+'0'));
                }
            }
            reverse(sol.begin(),sol.end());
            cout<<sol;
        }
        else{
            for(char e : s){
                cout<<('9'-e);
            }
        }
        cout<<"\n";
    }
}