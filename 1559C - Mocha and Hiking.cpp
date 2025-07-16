//1559C - Mocha and Hiking
//16-07-2025
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
const int maxn = 1e4;
int a[maxn+5];
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    if (a[n] == 0)
    {
        for (int i = 1; i <= n+1; ++i)
            cout << i << sp;
        return;
    }
    if (a[1] == 1)
    {
        cout << n+1 << sp;
        for (int i = 1; i <= n; ++i)
            cout << i << sp;
        return;
    }
    int vt;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] != a[i+1])
        {
            vt = i;
            break;
        }
    }
    for (int i = 1; i <= vt; ++i)
    {
        cout << i << sp;
    }
    cout << n + 1 << sp;
    for (int i = vt+1; i <= n; ++i) cout << i << sp;

}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }
    return 0;
}
