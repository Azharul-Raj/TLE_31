/**
 *    author:  raj_001
 *    created: 2024-08-23 22:53:04
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
#define ins insert
#define pb push_back
#define ppb pop_back
#define rf(i, a, b) for (int i = a; i < (b); i++)
#define fr(i, a) for (int i = 0; i < (a); i++)
#define frr(i, a) for (int i = (a) - 1; i >= 0; i--)
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    fr(i, n)
    {
        cin >> a[i];
        a[i]--;
    }
    fr(i, n)
    {
        cin >> b[i];
        b[i]--;
    }
    vl fa(2 * n), fb(2 * n);
    ll seg = 0;
    if (n == 1)
    {
        if (a[0] == b[0])
            cout << 2 << nl;
        else
            cout << 1 << nl;
        return;
    }
    ll len = 0;
    fr(i, n)
    {
        if (i > 0 && a[i] != a[i - 1])
        {
            len = 0;
        }
        len++;
        fa[a[i]] = max(fa[a[i]], len);
    }
    len = 0;
    fr(i, n)
    {
        if (i > 0 && b[i] != b[i - 1])
        {
            len = 0;
        }
        len++;
        fb[b[i]] = max(fb[b[i]], len);
    }
    //
    ll ans = 0;
    fr(i, 2 * n)
    {
        ans = max(ans, fa[i] + fb[i]);
    }
    cout << ans << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}