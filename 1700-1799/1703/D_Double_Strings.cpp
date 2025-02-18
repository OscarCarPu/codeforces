 #include <bits/stdc++.h>
 using namespace std;
 #define int long long
 bool comp(string a,string b){
    return a.length()<b.length();
 }
 signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> V(n);
        set<string> S;
        for(int i=0;i<n;i++)cin>>V[i],S.insert(V[i]);
        for(int i=0;i<n;i++){
            bool can=false;
            for(int x=1;x<V[i].length();x++){
                if(S.count(V[i].substr(0,x)) and S.count(V[i].substr(x,V[i].length()-x))){
                    can=true;
                }
            }
            if(can)cout<<"1";
            else cout<<0;
        }
        cout<<"\n";

    }
 }