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
#define vvb vector<vb>z
#define si set<int>
#define mii map<int,int>

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
bool comp(pii a,pii b){
    return a.first>b.first;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vi cont(26,0);
        vpii aux(26,{0,0});
        vvi poslet(26);
        for(int i=0;i<n;i++){
            poslet[s[i]-'a'].push_back(i);
        }
        for(char e : s){
            cont[e-'a']++;
            aux[e-'a'].first++;
        }
        for(int i=0;i<26;i++)aux[i].second=i;
        vi ord(26);
              sort(aux.begin(),aux.end(),comp);
        for(int i=0;i<26;i++)ord[i]=aux[i].second;
  
        int sol=LN;
        string solstr="";
        for(int p=1;p<=n;p++){
            if(n%p==0 and n/p<=26){
                int lu=-1,mb=-2;
                for(int i=0;i<26;i++){
                    if(cont[ord[i]]<=p and mb==-2){
                        mb=i-1;
                    }
                    if(cont[ord[i]]<p and lu==-1){
                        lu=i;
                    }
                }
              // cerr<<lu<<" "<<mb<<endl;
                if(lu==-1 and mb==-1){
                    sol=0;
                    solstr=s;
                }
                if(lu==-1)continue;
                vi auxcont=cont;
                string auxstr=s;
                int pl=0,pr=lu;
                int changes=0;
                int pll=0;
                while(pl<=mb and pr<26){
                    if(auxcont[ord[pl]]==p){
                        pl++;
                        pll=0;
                        continue;
                    }
                    if(auxcont[ord[pr]]==p){
                        pr++;
                        continue;
                    }
                    auxstr[poslet[ord[pl]][pll++]]=char(ord[pr]+'a');
                    auxcont[ord[pl]]--;
                    auxcont[ord[pr]]++;
                    changes++;
                }
                //cerr<<2;
                pl=25;
                pll=0;
                while(pr<26 and pr<pl){
                    if(auxcont[ord[pl]]==0){
                        pl--;
                        pll=0;
                        continue;
                    }
                    if(auxcont[ord[pr]]==p){
                        pr++;
                        continue;
                    }
                    auxstr[poslet[ord[pl]][pll++]]=char(ord[pr]+'a');
                    auxcont[ord[pl]]--;
                    auxcont[ord[pr]]++;
                    changes++;
                }
                //cerr<<3;
                if(changes<sol){
                    sol=changes;
                    solstr=auxstr;
                }
            }
        }
        cout<<sol<<"\n"<<solstr<<"\n";
    }
}

