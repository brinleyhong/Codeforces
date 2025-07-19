//899C - Dividing the numbers
//19-07-2025
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
vector <int> ans;
void solve()
{
    int n; cin >> n;
    if (n%4==0 || n%4==3) cout << 0;
    else cout << 1;
    cout << nl;
    int d = 0;
    if (n%4 == 0)
    {
        for (int i = 1; i <= n/2; i+=2) {
            ans.push_back(i);
            ans.push_back(n-i+1);
        }
    }
    else if (n%4==3)
    {
        ans.push_back(1);
        for (int i = 2; i <= n/2; i+=2)
        {
            ans.push_back(i);
            ans.push_back(n-i+2);
        }
        ans.push_back((n+1)/2);
    }
    else if (n%4==2)
    {
        ++d;
        for (int i = 1; i < n/2; i+=2)
        {
            ans.push_back(i);
            ans.push_back(n-i+1);
        }
        ans.push_back(n/2);
    }
    else
    {
        ++d;
        ans.push_back(1);
        for (int i = 2; i <= n/2; i+=2)
        {
            ans.push_back(i);
            ans.push_back(n-i+2);
        }
    }
    cout << ans.size() <<sp;
    for(int j = 0; j<ans.size(); ++j)cout<<ans[j]<<sp;
}
int main()
{
    solve();
    return 0;
}
