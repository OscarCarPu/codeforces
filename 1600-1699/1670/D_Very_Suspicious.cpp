#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int n){
        if(n%3==0){
            return n+((n/3)-1)*(n/3)*3;
        }
        else if(n%3==2){
            n-=2;
            int aux=n+((n/3)-1)*(n/3)*3;
            n+=2;
            return aux+(n/3)*4+1;
        }
        else{
            n--;
            int aux=n+((n/3)-1)*(n/3)*3;
            n++;
            return aux+(n/3)*2;
        }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int high=100000;
        int low=1;
        int sol=high;
        while(high>=low){
            int mid=(high+low)/2;
            if(f(mid)*2>=n){
                sol=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        cout<<sol<<"\n";
    }
}