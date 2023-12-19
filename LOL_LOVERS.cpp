#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define MS(x, y) memset(x, y, sizeof(x))
#define SZ(x) ((int)x.size())
#define MIN -0x3f3f3f3f
#define MAX 0x3f3f3f3f
#define iofast               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define cmax(a, b) (a < b ? a = b : a = a)
#define cmin(a, b) (a > b ? a = b : a = a)
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

#define MAXN 200010

void sol()
{
    string s;
    cin >> s;
    for (int i = 1; i <= 8; i++)
    {
        if (i != s[1] - '0')
            cout << s[0] << i << '\n';
    }
    for (int i = 'a'; i <= 'h'; i++)
    {
        if (i != s[0])
            cout << (char)i << s[1] << '\n';
    }
}

signed main()
{
    iofast;
    int _ = 1;
    cin >> _;
    while (_--)
    {
        sol();
    }
    return 0;
}