//1683C - Inversion Graph
//11-07-2025
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
#define pb push_back
const int maxn = 2e5;
int a[maxn+5];
void solve()
{
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    vector <int> s;
    s.pb(a[1]);
    for (int i = 2; i <= n; ++i)
    {
        int id = s.size() - 1;
        int maxx = s[id];
        if (a[i] > maxx) s.pb(a[i]);
        else //bo tat ca thang lon hon a[i] cho den cuoi
        {
            while (a[i] < s.back() && !s.empty())
            {
                s.pop_back();
            }
            s.pb(maxx);
        }
    }
    cout << s.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 1; i <= t; ++i){
        solve();
        cout << nl;
    }
    return 0;
}
