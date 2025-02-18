#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ant;
        cin>>ant;
        int sol=0;
        for(int a=1;a<n;a++){
            int aux;
            cin>>aux;
            while((double)max(ant,aux)/(double)min(ant,aux)>2.0){
                if(ant>aux){
                    if(ant%2==1)ant++;
                    ant/=2;
                }
                if(aux>ant)ant*=2;
                sol++;
            }
            ant=aux;
        }
        cout<<sol<<"\n";
    }
    return 0;
}