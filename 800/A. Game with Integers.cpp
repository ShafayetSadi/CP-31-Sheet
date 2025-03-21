#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;

int32_t main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        if (n % 3 == 1 or n % 3 == 2) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    
    return 0;
}