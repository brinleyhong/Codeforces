//1581B - Diameter of Graph
//15-07-25
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, m, k; cin >> n >> m >> k;
    bool check = true;
    if ((((ll)((ll)n * (n-1))/2) < m) || (m < (n-1)))
    {
        cout << "NO";
        return;
    }
    if (n == 1)
    {
        if (k > 1) cout << "YES";
        else cout << "NO";
        return;
    }
    if (m == (ll) ((ll)n*(n-1))/2)
    {
        if (k > 2) cout << "YES";
        else cout << "NO";
        return;
    }
    if (k>3) cout << "YES";
    else cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
