//1327B - Princesses and Princes
//18-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
bool princess[maxn+5];
bool prince[maxn+5];
void solve()
{
    int n; cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        princess[i] = false;
        prince[i] = false;
    }
    for (int i = 1; i <= n; ++i)
    {
        int k; cin >> k;
        for (int j = 1; j <= k; ++j)
        {
            int x;
            cin >> x;
            if (!princess[i] && !prince[x])
            {
                princess[i] = true;
                prince[x] = true;
            }
        }
    }
    bool optimal = true;
    int what = -1; //princess
    int huh = -1; //prince
    for (int i = 1; i <= n; ++i)
    {
        if (princess[i] == false)
            optimal = false;
        if (!princess[i]) what = i;
        if (!prince[i]) huh = i;
    }
    if (optimal) cout << "OPTIMAL";
    else cout << "IMPROVE" << "\n" << what << " " << huh;
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
