#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<bool> X(m,false);
    int sol=m;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        l--;r--;
        for(int j=l;j<=r;j++){
            if(!X[j]){
                sol--;
                X[j]=true;
            }
        }
    }
    cout<<sol<<"\n";
    for(int i=0;i<m;i++){
        if(X[i]==false){
            cout<<i+1<<" ";
        }
    }

}