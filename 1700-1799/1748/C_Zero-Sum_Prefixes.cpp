#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
#define vc vector<char>
#define vvc vector<vc>
#define vvb vector<vb>
#define si set<int>
#define mii map<int,int>

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi V(n);
        vi zeros;
        for(int i=0;i<n;i++){
            cin>>V[i];
            if(V[i]==0)zeros.push_back(i);
        }
        int sol=zeros.size();
        if(zeros.size()==0){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=V[i];
                if(sum==0)sol++;
            }
        }
        else if(zeros.size()>=1){
            int sum=0;
            for(int i=0;i<zeros[0];i++){
                sum+=V[i];
                if(sum==0)sol++;
            }
            for(int i=0;i<zeros.size();i++){
                mii M;
                sum=0;
                si S;
                M[0]=1;
                S.insert(0);
                int aux=0;
                if(i+1==zeros.size()){
                    for(int j=zeros[i]+1;j<n;j++){
                        sum+=V[j];
                        S.insert(sum);
                        if(!M.count(sum))M[sum]=0;
                        M[sum]++;
                    }
                    for(int x : S){
                        aux=max(aux,M[x]-1);
                    }
                    sol+=aux;
                    break;
                }
                for(int j=zeros[i]+1;j<zeros[i+1];j++){
                    sum+=V[j];
                    S.insert(sum);
                    if(!M.count(sum))M[sum]=0;
                    M[sum]++;
                }
                for(int x : S){
                    aux=max(aux,M[x]-1);
                }
                sol+=aux;
            }
        }
        cout<<sol<<"\n";
    }
}