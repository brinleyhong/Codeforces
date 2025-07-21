//94B - Friends
//21-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 10;
int deg[maxn+5];
void solve()
{
    int m; cin >> m;
    for (int i= 1; i <=m; ++i)
    {
        int u, v;
        cin >> u >> v;
        deg[u]++; deg[v]++;
    }
    bool check = false;
    for (int i = 1; i<=5; ++i)
    {
        if (deg[i]<=1 || deg[i] >=3)
        {
            check = true;
            break;
        }
    }
    if (check) cout << "WIN";
    else cout << "FAIL";
}
int main()
{

    solve();
    return 0;
}
