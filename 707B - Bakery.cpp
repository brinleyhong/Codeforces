//707B - Bakery
//06-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
vector <int> ke[maxn+3];
vector <int> ts[maxn+3];
bool dd[maxn+5] = {false};
int n, m, k, s[maxn+5];
#define nl "\n"
#define sp " "
void F()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
void solve()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= m; ++i)
    {
        int u,v,l;
        cin >> u >> v >> l;
        ts[u].push_back(l);
        ts[v].push_back(l);
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    int ans = 1e9+5;
    for (int i = 1; i <= k; ++i)
    {
        cin >> s[i];
        dd[s[i]] = true;
    }
    for (int i = 1; i <= k; ++i)
    {
        int t = ke[s[i]].size();
        for (int j = 0; j < t; ++j)
        {
            if (!dd[ke[s[i]][j]])
                ans = min(ans, ts[s[i]][j]);
        }
    }
    if (ans == 1e9 + 5) ans = -1;
    cout << ans;
}
int main()
{
    F();
    solve();
    return 0;
}
