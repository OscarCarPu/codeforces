#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int p,a,b,c,A=0,B=0,C=0;
        cin>>p>>a>>b>>c;
        if(p==a or p==b or p==c){
            cout<<"0\n";
            continue;
        }
        A=a*(p/a);
        if(A<p)A+=a;
        B=b*(p/b);
        if(B<p)B+=b;
        C=c*(p/c);
        if(C<p)C+=c;
        cout<<min(A-p,min(B-p,C-p))<<"\n";
    }
    return 0;
}