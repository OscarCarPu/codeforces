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
        int a=0,b=0,c=0;
        set<string> A,B;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            A.insert(s);
            a+=3;
        }
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(A.count(s)){
                a-=2;
                b++;
            }
            else{
                b+=3;
            }
            B.insert(s);
        }
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(A.count(s) and !B.count(s)){
                a-=2;
                c++;
            }
            else if(!A.count(s) and B.count(s)){
                b-=2;
                c++;
            }
            else if(A.count(s) and B.count(s)){
                a--;
                b--;
            }
            else{
                c+=3;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
}