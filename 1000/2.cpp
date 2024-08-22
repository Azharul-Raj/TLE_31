/**
 *    author:  raj_001
 *    created: 2024-08-22 06:25:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool y = 0;
    int cnt = 0, ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % k == 0)
        {
            y = 1;
        }
        if (a[i] % 2 == 0)
            cnt++;
    }
    if (y == 1)
    {
        ans = min(ans, 0LL);
    }
    else if (k == 4)
    {
        for (int i = 0; i < n; i++)
        {
            int m = (a[i] % k);
            ans = min(ans, k - m);
        }
        if (cnt >= 2)
        {
            ans = min(ans, 0LL);
        }
        else if (cnt == 1)
        {
            ans = min(ans, 1LL);
        }
        else
        {
            ans = min(ans, 2LL);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int m = (a[i] % k);
            ans = min(ans, k - m);
        }
    }
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