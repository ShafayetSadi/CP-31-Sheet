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
        int n, k; cin >> n >> k;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
        if (k > 1) {
            cout << "YES" << endl;
        }
        else {
            bool sorted = true;
            for (int i=0; i<n-1; i++) {
                if (arr[i] > arr[i+1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}