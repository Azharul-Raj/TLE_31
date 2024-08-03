/**
 *    author:  raj_001
 *    created: 2024-08-03 20:07:20
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    //
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, a[i] - a[i - 1]);
    }
    int val = 2 * (x - a[n]);
    // cout << val << nl;
    ans = max(ans, val);
    cout << ans << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}