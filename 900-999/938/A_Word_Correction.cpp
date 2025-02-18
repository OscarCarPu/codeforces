#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
bool vowel(char e){
    return e=='a' or e=='e' or e=='i' or e=='o' or e=='u' or e=='y';
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<s[0];
    for(int i=1;i<n;i++){
        if(vowel(s[i]) and vowel(s[i-1]));
        else cout<<s[i];
    }
}