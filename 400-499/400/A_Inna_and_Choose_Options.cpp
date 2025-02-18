#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> P={12,6,4,3,2,1};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> V;
        for(int i=0;i<6;i++){
            int x=12/P[i];
            bool aux=false;
            map<int,int> M;
            for(int j=0;j<12;j++){
                if(s[j]=='X')M[j%P[i]]++;
            }
            for(int j=0;j<P[i];j++){
                if(M[j]==x)aux=true;
            }
            if(aux)V.push_back(x);
        }
        cout<<V.size()<<" ";
        for(int i : V)cout<<i<<"x"<<12/i<<" ";
        cout<<"\n";
    }
}