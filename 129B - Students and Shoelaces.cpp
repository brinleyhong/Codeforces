//129B - Students and Shoelaces
//21-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 100;
bool d[maxn+5];
vector <int> adj[maxn+5];
void solve()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i<=m; ++i)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i<=n; ++i)
    {
        if (adj[i].size() == 1)
            ++cnt;
    }
    int ans = 0;
    while (true)
    {
        for(int i = 1; i<=n; ++i) d[i] = false;
        for (int i = 1; i<=n; ++i)
        {
            if (adj[i].size() == 1) d[i] = true;
        }
        bool check = false;
        for (int i = 1; i<=n; ++i)
        {
            if (d[i])
            {
                check = true;
                break;
            }
        }
        if (!check) break;
        for (int i = 1; i<=n; ++i)
        {
            vector <int> temp;
            for (int j = 0; j < adj[i].size(); ++j){
                if (!d[adj[i][j]])
                    temp.push_back(adj[i][j]);
            }
            adj[i] = temp;
            if (d[i] == true) adj[i].clear();
        }
        ++ans;
    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
