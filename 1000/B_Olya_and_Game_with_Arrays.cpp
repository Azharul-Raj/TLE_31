/**
 *    author:  raj_001
 *    created: 2024-08-22 17:37:38
 **/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define nl '\n'
#define INF 1e18
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define pb push_back
#define ppb pop_back
#define RFOR(i, a, b) for (int i = a; i < (b); i++)
#define FOR(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    bool f = 1;
    ll mn = INT_MAX, ans = 0, smn = INT_MAX;
    FOR(i, n)
    {
        int m;
        cin >> m;
        vl a(m);
        FOR(i, m)
        {
            cin >> a[i];
        }
        sort(all(a));
        mn = min(a[0], mn);
        ans += a[1];
        smn = min(a[1], smn);
    }
    // cout << ans << " " << mn << " " << smn << nl;
    cout << ans + mn - smn << nl;
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