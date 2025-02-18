#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.begin(),V.end());
    if(n%2){
        cout<<V[n/2];
    }
    else{
        cout<<min(V[n/2],V[n/2-1]);
    }
}