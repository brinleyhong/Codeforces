//1510K - King's Task
//16-07-2025

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
const int maxn = 1e3;
typedef long long ll;
int gen[2*maxn+5], og[2*maxn+5], n, a[2*maxn+5], b[2*maxn+5];
void thaotac1(int arr[])
{
    for (int i = 1; i < 2*n; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
}
void thaotac2(int arr[])
{
    for (int i = 1; i <= n; ++i)
    {
        swap(arr[i], arr[i+n]);
    }
}
bool sorted(int arr[])
{
    for (int i = 1; i <= 2*n; ++i)
    {
        if (arr[i] != i) return false;
    }
    return true;
}
int solve()
{
    cin >> n;
    for (int i = 1; i <= 2*n; ++i) {
        cin >> og[i];
        a[i] = og[i];
        b[i] = og[i];
    }
    if (sorted(og) == true) return 0;
    gen[1] = 0; //bat dau tu thao tac 1
    for (int i = 2; i <= 2*n; ++i) gen[i] = 1 - gen[i-1];
    for (int i = 1; i <= 2*n; ++i)
    {
        if (gen[i] == 0) //thao tac 1
        {
            thaotac1(a);
            thaotac2(b);
        }
        else
        {
            thaotac1(b);
            thaotac2(a);
        }
        if (sorted(a) == true || sorted(b) == true)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cout << solve();
    return 0;
}
