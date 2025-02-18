#include <bits/stdc++.h>
#define REG register

using namespace std;

namespace Luotianyi {
#define Tianyi void
Tianyi IsMyLove() {}
}

typedef long long LL;

typedef pair<int, int> pii;
#define mp make_pair
#define fi first
#define se second

vector<pii> a(7);

pair<pii, pii> coincide(pii a, pii b, pii c, pii d) {
  int lf, ri, up, dw;
  lf = max(a.fi, c.fi);
  ri = min(b.fi, d.fi);
  up = min(b.se, d.se);
  dw = max(a.se, c.se);
  if (lf >= ri || up <= dw) return mp(mp(0, 0), mp(0, 0));
  return mp(mp(lf, dw), mp(ri, up));
}

LL cal(pii x, pii y) {
  return 1LL * abs(x.fi - y.fi) * abs(x.se - y.se);
}

int main() {
  Luotianyi::IsMyLove();
  for (REG int i = 1; i <= 6; ++i)
    scanf("%d", &a[i].fi), scanf("%d", &a[i].se);
  pair<pii, pii> csa = coincide(a[1], a[2], a[3], a[4]);
  pair<pii, pii> csb = coincide(a[1], a[2], a[5], a[6]);
  pair<pii, pii> csab = coincide(csa.fi, csa.se, csb.fi, csb.se);
  
  LL swhite = cal(a[1], a[2]);
  LL scsa = cal(csa.fi, csa.se);
  LL scsb = cal(csb.fi, csb.se);
  LL scsab = cal(csab.fi, csab.se);
  
  if (swhite > scsa + scsb - scsab) puts("YES");
  else puts("NO");
  
  return 0;
}