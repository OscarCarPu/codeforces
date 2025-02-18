#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
typedef map <string, int>::iterator mit;
const int N=1100, inf =1e9, mod=1e9+7, eps=1e-12;
char k,s1[10],s2[10];
int a[10][200],was[200];
int main () {
    int n;
	cin>>n;
	for (int i=0; i<n; i++)  
		for (int j=0; j<4; j++) cin>>a[j][i];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++) {
			int all=1;
			for (int k=0; k<3; k++)
				if (a[k][i]<a[k][j]);
				else all=0;
			if (all) was[i]=1;
		}
	int ans=-1;
	for (int i=0; i<n; i++) 
		if (!was[i]) {
			if (ans==-1 || a[3][i]<a[3][ans]) ans=i;
		}
	cout<<ans+1;
}