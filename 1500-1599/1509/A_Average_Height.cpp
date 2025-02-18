#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> o,e;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2){
                o.push_back(x);
            }
            else e.push_back(x);
        }
        for(int i=0;i<(int)o.size();i++)cout<<o[i]<<" ";
        for(int i=0;i<(int)e.size();i++)cout<<e[i]<<" ";
        cout<<"\n";
    }
    return 0;
}