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
        int n, x; cin >> n >> x;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int ans = arr[0];
        for (int i=0; i<n-1; i++) {
            ans = max(ans, arr[i+1] - arr[i]);
        }
        ans = max(ans, (x - arr[n-1])*2);
        cout << ans << endl;
    }
    
    return 0;
}