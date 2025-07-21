//330B - Road Construction
//21-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e3;
int deg[maxn+5];
void solve()
{
    int n, m; cin >> n >>m;
    for (int i = 1; i<=m; ++i)
    {
        int u,v;
        cin >> u>> v;
        deg[u]++; deg[v]++;
    }
    int ans;
    for (int i= 1; i<=n; ++i)
    {
        if (deg[i]==0) ans = i;
    }
    cout << n-1 <<endl;
    for (int i = 1; i<=n; ++i)
    {
        if (i!=ans)
        {
            cout<<ans<< " "<<i<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
