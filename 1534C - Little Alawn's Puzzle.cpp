//1534C - Little Alawn's Puzzle
//16-07-2025
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
const int MOD = 1e9 + 7;
const int maxn = 4e5;
typedef long long ll;

int a[maxn+5], b[maxn+5];
vector<int> adj[maxn+5];
bool visited[maxn+5];
ll power(int base, int indices)
{
    ll ans = 1;
    for (int i = 1; i <= indices; ++i)
    {
        ans = ((ans % MOD) * (base % MOD)) % MOD;
    }
    return ans;
}
void dfs(int u)
{
    visited[u] = true;
    int m = adj[u].size();
    for (int i = 0; i < m; ++i)
    {
        int v = adj[u][i];
        if (!visited[v])
            dfs(v);
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        visited[a[i]] = false;
        adj[a[i]].clear();
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
        visited[b[i]] = false;
        adj[b[i]].clear();
    }
    for (int i = 1; i <= n; ++i)
    {
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }
    int mlt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[a[i]])
        {
            dfs(a[i]);
            ++mlt;
        }
    }

    cout << power(2, mlt);
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
