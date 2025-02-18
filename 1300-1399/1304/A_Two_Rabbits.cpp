#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,sol=-1;
        cin>>x>>y>>a>>b;
        int high=((y-x)/max(a,b))+1;
        int low=0;
        while(low<=high){
            int mid=(high+low)/2;
            if(x+a*mid>y-b*mid){
                high=mid-1;
            }
            else if(x+a*mid==y-b*mid){
                sol=mid;
                break;
            }
            else{
                low=mid+1;
            }
        }
        cout<<sol<<"\n";
    }
    return 0;
}