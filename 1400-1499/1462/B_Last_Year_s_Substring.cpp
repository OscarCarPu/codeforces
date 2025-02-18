#include <iostream>
using namespace std;
void caso(){
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    bool jump=true;
    if(s[0]=='2'||s[(n-1)]=='0'){
        
        if(s[0]=='2'&&s[(n-1)]=='0'){
            if(s[1]=='0'){
                if(s[n-2]=='2'||s[2]=='2'){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if(s[n-3]=='0'&&s[n-2]=='2'){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0'){
            cout<<"YES"<<endl;
        }else if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        caso();
    }
}