//1829F - Forever Winter
//13-07-25
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
const int maxn = 200;
int dg[maxn+5] = {0};
void solve()
{
    int n, m; cin >> n >> m;
    for (int i = 0; i <= n; ++i) dg[i] = 0;
    for (int i = 1; i <= m; ++i)
    {
        int u, v; cin >> u >> v;
        dg[u]++; dg[v]++;
    }
    int x = 0;
    int y = -1;
    for (int i = 1; i <= n; ++i)
    {
        if (dg[i] == 1) ++x;
        else ++y;
    }
    cout << y << sp << x/y << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
