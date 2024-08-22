/**
 *    author:  raj_001
 *    created: 2024-08-22 09:04:09
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
    vector<int> a(n), b(n);
    vector<pair<int, int>> final(n);
    int ans = k, times = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        final[i] = {b[i], a[i]};
    }
    sort(all(final));
    // for (auto [x, y] : final)
    // {
    //     cout << x << " " << y << nl;
    // }
    for (int i = 0; i < n; i++)
    {
        int f = final[i].first, s = final[i].second;
        if (f < k)
        {
            if (s >= times)
            {
                ans += (f * times);
                times = 0;
            }
            else
            {
                ans += (f * s);
                times -= s;
            }
            if (!times)
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    //
    if (times > 0)
    {
        ans += (k * times);
        k = 0;
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