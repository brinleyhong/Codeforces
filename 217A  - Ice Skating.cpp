//217A - Ice Skating
//21-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 100;
bool visited[maxn+5];
vector <int> adj[maxn+5];
void dfs(int i)
{
    visited[i] = true;
    for (int j = 0; j<adj[i].size(); ++j)
    {
        if(!visited[adj[i][j]])
        {
            dfs(adj[i][j]);
        }
    }
}
void solve()
{
    int n; cin >> n;
    vector<pair <int, int>>p;
    for (int i = 1; i<=n; ++i)
    {
        int u,v; cin >> u >> v;
        p.push_back(make_pair(u,v));
    }

    for (int i = 0; i<n; ++i)
    {
        int x, y;
        x = p[i].first;
        y = p[i].second;
        for (int j = 0; j<n; ++j)
        {
            if (i==j) continue;
            if (p[j].first==x||p[j].second==y)
                adj[i].push_back(j);
        }
    }
    int ans = 0;
    for (int i =0; i<n; ++i)
    {
        if (!visited[i])
        {
            dfs(i);
            ++ans;
        }
    }
    cout<<ans-1;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
