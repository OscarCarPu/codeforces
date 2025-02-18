#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin>>k;
    string s;
    cin.ignore();
    getline(cin,s);
    int n=s.length();
    int high=n,low=1;
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt++;
        if(s[i]==' ' or s[i]=='-'){
            low=max(low,cnt);
            cnt=0;
        }
    }
    low=max(low,cnt);
    int res=high;
    while(high>=low){
        int mid=(high+low)/2;
        int last=-1;
        int aux=0;
        int c=0;
        for(int i=0;i<n;i++){
            aux++;
            if(s[i]==' ' or s[i]=='-'){
                if(aux>mid){
                    i=last;
                    aux=0;
                    c++;
                }
                else last=i;
            }
            if(i==n-1){
                if(aux>mid){
                    i=last;
                    aux=0;
                    c++;
                }
            }
        }
        if(aux>0){
            c++;
        }
        if(c<=k){
            high=mid-1;
            res=mid;
        }
        else low=mid+1;
    }
    cout<<res;
}