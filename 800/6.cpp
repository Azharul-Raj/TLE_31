/**
 *    author:  raj_001
 *    created: 2024-08-04 10:40:47
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
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    for (int &v : a)
    {
        cin >> v;
        mp[v]++;
    }
    if (n == 2 || mp.size() == 1)
    {
        cout << "Yes" << nl;
        return;
    }
    sort(a.begin(), a.end());
    bool y = 0;
    if (mp.size() == 2)
    {
        if ((n % 2 == 1 && abs(mp[a[0]] - mp[a[n - 1]]) == 1) || (n % 2 == 0 && mp[a[0]] == mp[a[n - 1]]))
        {
            y = 1;
        }
    }

    cout << (y ? "Yes" : "No") << nl;
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