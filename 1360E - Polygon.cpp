//1360E - Polygon
//16-07-2025
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "

const int maxn = 50;
char a[maxn+5][maxn+5];
bool solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            if (a[i][j+1] == '0' && a[i+1][j] == '0' && a[i][j] == '1') return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        if (solve()) cout << "YES";
        else cout << "NO";
        cout << nl;
    }
    return 0;
}
