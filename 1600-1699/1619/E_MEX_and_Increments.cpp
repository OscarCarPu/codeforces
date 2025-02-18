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
        vector<int> V(n);
        map<int,int> M;
        for(int i=0;i<n;i++){
            cin>>V[i];
            M[V[i]]++;
        }
        sort(V.begin(),V.end());
        stack<int> S;
        int sum=0;
        for(int i=0;i<=n;i++){
            if(i>0 and M[i-1]==0){
                if(S.empty()){
                    for(int j=i;j<=n;j++){
                        cout<<"-1 ";
                    }
                    break;
                }
                int j=S.top();
                S.pop();
                sum+=i-j-1;
            }
            cout<<sum+M[i]<<" ";
            while(i>0 and M[i-1]>1){
                M[i-1]--;
                S.push(i-1);
            }
        }
        cout<<"\n";
    }
}