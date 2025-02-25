#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

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
        int a=0,b=0;
        for(char c : s){
            if(c=='-'){
                a++;
            }
            else {
                b++;
            }
        }
        cout<<b*(a/2)*(a/2+(a%2!=0))<<"\n";
    }
}