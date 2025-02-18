#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
vector<char> C={'a','e','i','o','u'};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=5;i<=n;i++){
        if(n%i==0 and n/i>=5){
            int a=i;
            int b=n/i;
            for(int i=0;i<a;i++){
                for(int j=0;j<b;j++){
                    cout<<C[(j+i)%5];
                }
            }
            return 0;
        }
    }
    cout<<"-1";
}