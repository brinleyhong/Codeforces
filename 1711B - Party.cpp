#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
int a[maxn+5], x[maxn+5], y[maxn+5], Deg[maxn+5];
#define nl "\n"
void solve()
{
    //read
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        Deg[i] = 0;
    }
    for (int i = 1; i <= m; ++i)
    {
        cin >> x[i] >> y[i];
        Deg[x[i]]++;
        Deg[y[i]]++;
    }

    int ans = (int) 1e9+5;
    if (m%2==0) //invite mn
    {
        cout << 0;
        return;
    }
    for (int i = 1; i <= n; ++i) //1
    {
        if (Deg[i]%2==1) ans=min(ans,a[i]);
    }
    for (int i = 1; i <= m; ++i)
    {
        if (Deg[x[i]]%2==0&&Deg[y[i]]%2==0) ans = min(ans, a[x[i]]+a[y[i]]);
    }
    cout << ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }
    return 0;
}
