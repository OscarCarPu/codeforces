#include <bits/stdc++.h>
using namespace std;

const long long INF = 2000000011;

int N;
long long A[200005];

namespace Trie {
	struct Node { 
		int l = -1, r = -1; 
	};

	int B;
	vector<Node> nodes;

	int newNode() {
		nodes.emplace_back();
		return nodes.size() - 1;
	}

	void init(int _B) {
		B = _B;
		nodes.clear();
		newNode();
	}

	void insert(int n) {
		int u = 0;
		for (int i = B; i >= 0; i--) {
			if ((n >> i) & 1) {
				if (nodes[u].r == -1) {
					nodes[u].r = newNode();
				}
				u = nodes[u].r;
			} else {
				if (nodes[u].l == -1) {
					nodes[u].l = newNode();
				}
				u = nodes[u].l;
			}
		}
	}

	int query(int n) {
		int u = 0, ans = 0;
		for (int i = B; i >= 0; i--) {
			if ((n >> i) & 1) {
				if (nodes[u].r != -1) {
					u = nodes[u].r;
				} else {
					ans |= (1 << i);
					u = nodes[u].l;
				}
			} else {
				if (nodes[u].l != -1) {
					u = nodes[u].l;
				} else {
					ans |= (1 << i);
					u = nodes[u].r;
				}
			}
		}
		return ans;
	}
}
 
long long ans = 0;
 
void dnq(int l = 0, int r = N - 1, int b = 29) {
	if (l >= r) {
		return;
	}
	
	Trie::init(b);
	int m = 0, tans = INF;
	for (m = l; m <= r && !((A[m] >> b) & 1); m++) {
		Trie::insert(A[m]);
	}
	if (m == l || m == r + 1) {
		return dnq(l, r, b - 1);
	}
	for (int i = m; i <= r; i++) {
		tans = min(tans, Trie::query(A[i]));
	}
	ans += tans == INF ? 0 : tans;

	dnq(l, m - 1, b - 1);
	dnq(m, r, b - 1);
}
 
int main() {
	cin >> N; 
	{
		set<int> S;
		for (int i = 0; i < N; i++) {
			int a;
			cin >> a;
			S.insert(a);
		}
        int i=0;
		for ( int s : S) {
			A[i++] = s;
		}
		N = S.size();
	}
 
	dnq();
 
	cout << ans << '\n';
}
