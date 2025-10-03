#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

bool sortbygravity(const vi &a, const vi&b){
    for (int i =0;i<min(a.size(),b.size());i++){
        if(a[i]!=b[i]) return a[i]<b[i];
    }
    return a.size()<b.size();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vvi arr(n,vi());
        int max_len=0;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            max_len=max(max_len,m);
            arr[i].resize(m);
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        sort(arr.begin(),arr.end(),sortbygravity);
        for(int i=0;i<max_len;i++){
            for(int j=0;j<n;j++){
                if(i<arr[j].size()){
                    cout<<arr[j][i]<<" ";
                    break;
                }
            }
        }
        cout<<"\n";
    }
}
