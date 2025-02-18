#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        vector<int> V(n1);
        for(auto& i : V)cin>>i;
        int res=-1;
        sort(V.begin(),V.end());
        for(int a=0;a<n2;a++){
            int aux;
            cin>>aux;
            if(res>0)continue;
            int high=n1-1,low=0;
            while(low<=high){
                int mid=(low+high)/2;
                if(V[mid]<aux)low=mid+1;
                else if(V[mid]>aux)high=mid-1;
                else{res=V[mid];high=low-1;}
            }
        }
        if(res==-1)cout<<"NO\n";
        else cout<<"YES\n"<<"1 "<<res<<"\n";
    }
    return 0;
}