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
        int n,q;
        cin>>n>>q;
        vector<int> points(n,0),danger(n,0),numbits(n,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int bits = 64 - __builtin_clzll(x) - 1;
            int ones = __builtin_popcountll(x) -1;
            points[i] = ones > 0;
            numbits[i] = bits;
            int bit_pos = 1;
            danger[i] = 1;
            for(int j=0;j<ones;j++){
                if ((x & bit_pos) == 0){
                    danger[i] = 0;
                    break;
                }
                bit_pos <<= 1;
            }
            if (points[i] == 0 or ones > 1) danger[i] = 0;
            if(i>0){
                points[i] += points[i-1];
                danger[i] += danger[i-1];
                numbits[i] += numbits[i-1];
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;r--;
            int p = points[r] - (l>0 ? points[l-1] : 0);
            int d = danger[r] - (l>0 ? danger[l-1] : 0);
            int b = numbits[r] - (l>0 ? numbits[l-1] : 0);
            cout<<b + p - (d+1)/2<<'\n';
        }

    }
}