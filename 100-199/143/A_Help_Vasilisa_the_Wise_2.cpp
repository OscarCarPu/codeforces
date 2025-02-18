#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a=1,b=1,c=1,d=0;
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    while(true){
        d++;
        if(d==10){
            d=1;
            c++;
            if(c==10){
                c=1;
                b++;
                if(b==10){
                    b=1;
                    a++;
                    if(a==10){
                        break;
                    }
                }
            }
        }
        if(a==b or a==c or a==d or b==c or b==d or c==d)continue;
        if(r1==a+b and r2==c+d and c1==a+c and c2==b+d and d1==a+d and d2==b+c){
            cout<<a<<" "<<b<<"\n"<<c<<" "<<d;
            return 0;
        }
    }
    cout<<"-1";


}