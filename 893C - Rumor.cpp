//893C - Rumor
//19-07-2025
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
typedef long long ll;
const int maxn = 1e5;
int c[maxn+5];
bool visited[maxn+5];
vector <int> adj[maxn+5];
int temp = (int) 1e9+5;
void dfs(int u)
{
    temp = min(temp, c[u]);
    visited[u] = true;
    for (int i = 0; i < adj[u].size(); ++i)
    {
        int v = adj[u][i];
        if (!visited[v])
        {
            visited[v] = true;
            dfs(v);
        }
    }
}
void solve()
{
    int n; cin >> n; int m; cin >> m;
    for (int i = 1; i<=n; ++i) cin >> c[i];
    for (int i = 1; i <=m; ++i)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            visited[i] = true;
            temp = (int) 1e9+5;
            dfs(i);
            ans = (ll) ans + temp;
        }
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
