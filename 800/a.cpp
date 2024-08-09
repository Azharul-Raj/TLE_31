/**
 *    author:  raj_001
 *    created: 2024-08-08 20:16:03
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (int &v : a)
        cin >> v;

    if (is_sorted(all(a)))
    {
        cout << a.size() << nl;
        for (int v : a)
            cout << v << " ";
        cout << nl;
        return;
    }
    b.pb(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] <= a[i])
        {
            b.pb(a[i]);
        }
        else
        {
            b.pb(a[i]);
            b.pb(a[i]);
        }
    }
    // b.pb(a[n - 1]);
    cout << b.size() << nl;
    for (int v : b)
        cout << v << " ";
    cout << nl;
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