//1065B - Vasya and Isolated Vertices
//18-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
typedef long long ll;
void solve()
{
    int n;
    ll m;
    cin >> n >> m;
    ll minn;
    ll max_node = (ll) m*2;
    minn = max((ll) 0, (ll)n - max_node);
    int maxx;
    int min_node = 1;
    ll wtf = m;
    while (wtf)
    {
        ll s = min((ll)min_node,wtf);
        wtf = (ll) wtf - s;
        ++min_node;
    }
    if (min_node == 1) min_node = 0;
    maxx = n - min_node;
    cout << minn << " " << maxx;
}
int main()
{
    solve();
    return 0;
}
