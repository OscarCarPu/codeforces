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
        vi a;
        int total = 0;
        while(n--){
            int x;
            cin>>x;
            if(x%2)a.push_back(x);
            else total += x;
        }
        if (a.size()==0){
            cout<<"0\n";
            continue;
        }
        sort(a.rbegin(), a.rend());
        for (int i=0;i<(a.size()-1)/2+1;i++)total+=a[i];
        cout<<total<<"\n";
        
    }
}
