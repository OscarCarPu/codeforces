 #include <bits/stdc++.h>
 using namespace std;
 #define int long long
 signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        if(n%2==0){
            int m=LLONG_MAX;
            int in=-1;
            for(int i=0;i<n;i++){
                if(m>V[i]){
                    m=V[i];
                    in=i;
                }
            }
            if(in%2){
                cout<<"Mike\n";
            }
            else{
                cout<<"Joe\n";
            }

        }
        else{
            cout<<"Mike\n";
        }
    }
 }