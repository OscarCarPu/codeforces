#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int l1,l2,l3;
        cin>>l1>>l2>>l3;
        if(l1<l2)swap(l1,l2);
        if(l1<l3)swap(l1,l3);
        if(l1==l2 or l2==l3 or l1==l3){
            if(l1==l2){
                if(l3%2==0){
                    cout<<"YES\n";
                    continue;
                }
            }
            if(l2==l3){
                if(l1%2==0){
                    cout<<"YES\n";
                    continue;
                }
            }
            if(l1==l3){
                if(l2%2==0){
                    cout<<"YES\n";
                    continue;
                }
            }
        }
        else{
            if(l1==l2+l3){
                cout<<"YES\n";
                continue;
            }
        }
        cout<<"NO\n";
    }
}