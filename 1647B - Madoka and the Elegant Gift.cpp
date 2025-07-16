//1647B - Madoka and the Elegant Gift
//15-07-25
#include <bits/stdc++.h>
using namespace std;
int n, m;
const int maxn = 777;
char a[maxn+5][maxn+5];
void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }
    bool check = true;
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < m; ++j)
        {
            int temp = 0;
            if (a[i][j] == '1') ++temp;
            if (a[i+1][j] == '1') ++temp;
            if (a[i][j+1] == '1') ++temp;
            if (a[i+1][j+1] == '1') ++temp;
            if (temp == 3)
            {
                check = false;
                break;
            }
        }
    }
    if (check == true) cout << "YES";
    else cout << "NO";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
