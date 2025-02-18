 #include <bits/stdc++.h>
 using namespace std;
 #define int long long
 signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n,-1);
    vector<int> sol(n,-1);
    for(int i=0;i<n;i++){
        cout<<"? ";
        for(int j=0;j<n;j++){
            if(j==i)cout<<"2 ";
            else cout<<"1 ";
        }
        cout<<endl;
        int x;
        cin>>x;
        if(x!=0 and x-1!=i)V[i]=x-1;
    }
    int s;
    for(int i=0;i<n;i++){
        cout<<"? ";
        for(int j=0;j<n;j++){
            if(j==i)cout<<"1 ";
            else cout<<"2 ";
        }
        cout<<endl;
        int x;
        cin>>x;
        if(x==0)s=i;
        else if(x-1!=i)V[x-1]=i;
    }
    int x=1;
    while(s!=-1){
        sol[s]=x++;
        s=V[s];
    }
    cout<<"! ";
    for(int i : sol)cout<<i<<" ";
 }