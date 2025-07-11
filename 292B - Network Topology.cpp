#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
int n, m;
int f[maxn+5], x[maxn+5], y[maxn+5];
vector <int> deg;
#define nl "\n"
bool bus()
{
    if (m != n-1) return false;
    int deg1 = 0, deg2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (deg[i] == 1) deg1++;
        else if (deg[i] == 2) deg2++;
    }
    return (deg1 == 2 && deg2 == n-2);
}
bool star()
{
    if (m!=n-1) return false;
    int c = 0;
    int l = 0;
    for (int i =1 ;i <= n; ++i)
    {
        if (deg[i] == n-1) ++c;
        else if (deg[i] == 1)++l;
    }
    return (c == 1 && l == n-1);
}
bool ring()
{
    int deg2 = 0;
    if (m!=n)return false;
    for (int i = 1; i <= n; ++i)
    {
        if (deg[i] == 2)++deg2;
    }
    return (deg2==n);
}
string solve()
{
    cin >> n >> m;
    deg.assign(n+1, 0);
    for (int i = 1; i <= m; ++i)
    {
        cin >> x[i] >> y[i];
        deg[x[i]]++;
        deg[y[i]]++;
    }
    if (bus()) return "bus topology";
    if (star()) return "star topology";
    if (ring()) return "ring topology";
    return "unknown topology";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cout << solve();
    return 0;
}
