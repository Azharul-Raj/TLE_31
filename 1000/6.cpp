/**
 *    author:  raj_001
 *    created: 2024-08-23 21:41:17
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
    int n, k, q;
    cin >> n >> k >> q;
    vi a(n);
    fr(i, n) cin >> a[i];
    ll seg = 0, ans = 0;
    fr(i, n)
    {
        if (a[i] <= q)
        {
            seg++;
            if (i == n - 1 || a[i + 1] > q)
            {
                if (seg >= k)
                {
                    ll n = seg - k + 1LL;
                    ans += ((n * (n + 1)) / 2);
                }
                seg = 0;
            }
        }
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
//"    $0",
//