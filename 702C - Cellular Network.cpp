#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e5;
int cities[maxn+5], towers[maxn+5], n, m;
bool check(int val)
{
    for (int i = 1; i<=n; ++i)
    {
        int id1 = lower_bound(towers+1, towers+m+1, cities[i]) - towers;
        int id2 = id1-1;
        int cnt = 0;
        if (id1 > m || id1 < 1) ++cnt;
        else
        {
            if (abs(towers[id1] - cities[i]) > val) ++cnt;
        }
        if (id2 > m || id2 < 1) ++cnt;
        else
        {
            if (abs(towers[id2] - cities[i]) > val) ++cnt;
        }
        if (cnt==2) return false;
    }
    return true;
}
void solve()
{
    cin >> n >> m;
    for (int i = 1; i<=n; ++i) cin >> cities[i];
    for (int i = 1; i<=m; ++i) cin >> towers[i];
    int l = 0;
    int r = (int) 2*1e9;
    int ans = 2e9;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            r = mid-1;
            ans = min(ans, mid);
        }
        else l = mid+1;
    }
    cout << ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
