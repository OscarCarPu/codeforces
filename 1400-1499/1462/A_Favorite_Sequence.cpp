#include <iostream>
using namespace std;
void caso(){
    int n;
    cin>>n;
    int b[n];
    int c[n];
    for(int a=0;a<n;a++){
        cin>>b[a];
    }
    int e=0,d=(n-1);
    for(int a=0;a<n;a++){
        c[a]=b[e];
        a++;e++;
        c[a]=b[d];
        d--;

    }
    for(int a=0;a<n;a++){
        cout<<c[a]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        caso();
    }
}