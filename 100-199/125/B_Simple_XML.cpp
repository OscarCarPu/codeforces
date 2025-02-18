#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int spaces=0;
    for(int i=0;i<s.length();){
        if(s[i+1]=='/'){
                        spaces--;
            for(int j=0;j<spaces;j++)cout<<"  ";
            for(int j=0;j<4;j++){
                cout<<s[i];
                i++;
            }
            cout<<"\n";

        }   
        else{

            for(int j=0;j<spaces;j++)cout<<"  ";
            for(int j=0;j<3;j++){
                cout<<s[i];
                i++;
            }
                        spaces++;
            cout<<"\n";
        }
    }
}