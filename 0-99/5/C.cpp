#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    stack<int> st;
    st.push(-1);
    int max_length=0,cnt=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(i);
        } else {
            st.pop();
            if(st.empty()) {
                st.push(i);
            }
            else {
                int current_length = i - st.top();
                if(current_length > max_length){
                    max_length = current_length;
                    cnt=1;
                }
                else if(current_length==max_length)cnt++;
            }
        }
    }
    if(max_length==0)cout<<"0 1";
    else cout<<max_length<<" "<<cnt;
}
