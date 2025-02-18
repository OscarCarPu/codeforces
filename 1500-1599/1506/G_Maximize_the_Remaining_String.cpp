#include <bits/stdc++.h>
using namespace std;
int distinct(string s){
    sort(s.begin(),s.end());
    return unique(s.begin(),s.end())-s.begin();
}
string filter(const string&s, char c){
    string t;
    bool foundFirst=false;
    for(char a : s){
        if(a!=c and foundFirst){
            t+=a;
        }
        else if(a==c){
            foundFirst=true;
        }
    }
    return t;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m=distinct(s);
        set<char> used(s.begin(),s.end());
        string T;
        while(m>0){
            char maxC=-1;
            for(char c : used){
                if(distinct(filter(s,c))==m-1){
                    maxC=max(maxC,c);
                }
            }
            T+=maxC;
            s=filter(s,maxC);
            used.erase(maxC);
            m--;
        }
        cout<<T<<"\n";
    }
}