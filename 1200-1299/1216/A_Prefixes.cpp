#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cont1=0,cont2=0;
    cin>>n;
    string s;
    cin>>s;
    int cont=0;
    for(int i=0;i<n;i+=2){
        if(s[i]=='a'){
            if(s[i+1]=='a'){
                s[i+1]='b';
                cont++;
            }
        }
        else{
            if(s[i+1]=='b'){s[i+1]='a';cont++;}
        }
    }
    cout<<cont<<"\n"<<s;
}