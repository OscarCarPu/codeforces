#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int,string> D={{2,"twenty-"},{3,"thirty-"},{4,"forty-"},{5,"fifty-"},{6,"sixty-"},{7,"seventy-"},{8,"eighty-"},{9,"ninety-"}};
    map<int,string> U={{0,"zero"},{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
    int n;
    cin>>n;
    if(n<10){
        cout<<U[n];
    }
    else if(n<20 and n>10){
        if(n==11)cout<<"eleven";
        if(n==12)cout<<"twelve";
        if(n==13)cout<<"thirteen";
        if(n==14)cout<<"fourteen";
        if(n==15)cout<<"fifteen";
        if(n==16)cout<<"sixteen";
        if(n==17)cout<<"seventeen";
        if(n==18)cout<<"eighteen";
        if(n==19)cout<<"nineteen";
    }
    else if(n%10==0){
        if(n==10)cout<<"ten";
        if(n==20)cout<<"twenty";
        if(n==30)cout<<"thirty";
        if(n==40)cout<<"forty";
        if(n==50)cout<<"fifty";
        if(n==60)cout<<"sixty";
        if(n==70)cout<<"seventy";
        if(n==80)cout<<"eighty";
        if(n==90)cout<<"ninety";
    }
    else{
        cout<<D[n/10]<<U[n%10];
    }
}